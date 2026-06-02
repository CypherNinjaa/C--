from collections import Counter
from datetime import date, datetime, timedelta
from pathlib import Path
import html
import math
import subprocess


OUTPUT = Path("assets/commit-graph.svg")
MIN_VISIBLE_DAYS = 14

WIDTH = 940
HEIGHT = 360
LEFT = 74
RIGHT = 38
TOP = 86
BOTTOM = 68

BG = "#0f172a"
PANEL = "#111827"
GRID = "#263244"
AXIS = "#64748b"
TEXT = "#e5e7eb"
MUTED = "#94a3b8"
BLUE = "#38bdf8"
PURPLE = "#a78bfa"
BAR = "#2563eb"


def is_bot_commit(author_name: str, author_email: str) -> bool:
    identity = f"{author_name} {author_email}".lower()
    return "github-actions" in identity or "[bot]" in identity


def run_git_history() -> list[tuple[date, str, str]]:
    result = subprocess.run(
        [
            "git",
            "log",
            "--date=format:%Y-%m-%d",
            "--pretty=format:%ad%x09%an%x09%ae",
        ],
        check=True,
        capture_output=True,
        text=True,
    )

    commits = []
    for line in result.stdout.splitlines():
        parts = line.split("\t")
        if len(parts) != 3:
            continue

        commit_day, author_name, author_email = parts
        if is_bot_commit(author_name, author_email):
            continue

        commits.append((datetime.strptime(commit_day, "%Y-%m-%d").date(), author_name, author_email))

    return commits


def nice_ceiling(value: int) -> int:
    if value <= 0:
        return 1

    magnitude = 10 ** math.floor(math.log10(value))
    normalized = value / magnitude

    if normalized <= 1:
        nice = 1
    elif normalized <= 2:
        nice = 2
    elif normalized <= 5:
        nice = 5
    else:
        nice = 10

    return int(nice * magnitude)


def y_axis_max(max_commits: int) -> int:
    if max_commits <= 10:
        return max(1, max_commits)
    return nice_ceiling(max_commits)


def y_tick_values(y_max: int) -> list[int]:
    if y_max <= 10:
        return list(range(0, y_max + 1))

    step = max(1, y_max // 4)
    values = [step * index for index in range(0, 5)]

    if values[-1] != y_max:
        values.append(y_max)

    return values


def chart_range(counts: Counter) -> tuple[date, date]:
    if not counts:
        today = date.today()
        return today - timedelta(days=MIN_VISIBLE_DAYS - 1), today

    first = min(counts)
    latest = max(counts)
    span = (latest - first).days + 1

    if span >= MIN_VISIBLE_DAYS:
        return first, latest

    missing = MIN_VISIBLE_DAYS - span
    left_padding = missing // 2
    right_padding = missing - left_padding
    return first - timedelta(days=left_padding), latest + timedelta(days=right_padding)


def date_labels(start: date, end: date) -> list[date]:
    total_days = (end - start).days + 1
    label_count = min(7, total_days)

    if label_count <= 1:
        return [start]

    step = max(1, round((total_days - 1) / (label_count - 1)))
    labels = []
    current = start

    while current <= end:
        labels.append(current)
        current += timedelta(days=step)

    if labels[-1] != end:
        labels.append(end)

    return labels


def format_date_label(day: date) -> str:
    return day.strftime("%b %d")


def build_svg() -> str:
    commits = run_git_history()
    counts = Counter(commit_day for commit_day, _, _ in commits)
    start, end = chart_range(counts)
    max_commits = max(counts.values(), default=0)
    y_max = y_axis_max(max_commits)

    plot_width = WIDTH - LEFT - RIGHT
    plot_height = HEIGHT - TOP - BOTTOM
    total_days = max(1, (end - start).days)
    bar_count = total_days + 1
    bar_gap = 4
    bar_width = max(8, min(28, (plot_width - (bar_count - 1) * bar_gap) / bar_count))
    latest_commit = max(counts) if counts else None
    latest_label = latest_commit.strftime("%Y-%m-%d") if latest_commit else "No commits yet"

    def x_for(day: date) -> float:
        return LEFT + ((day - start).days / total_days) * plot_width

    def y_for(value: int) -> float:
        return TOP + plot_height - (value / y_max) * plot_height

    days = [start + timedelta(days=offset) for offset in range(bar_count)]
    points = [(x_for(day), y_for(counts.get(day, 0)), counts.get(day, 0), day) for day in days]
    line_points = " ".join(f"{x:.2f},{y:.2f}" for x, y, _, _ in points)

    elements = [
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{WIDTH}" height="{HEIGHT}" viewBox="0 0 {WIDTH} {HEIGHT}" role="img" aria-labelledby="title desc">',
        '<title id="title">Repository commit history chart</title>',
        '<desc id="desc">A repo-only X and Y axis chart showing daily commits from this repository history.</desc>',
        "<defs>",
        '<linearGradient id="bg" x1="0" y1="0" x2="1" y2="1">',
        f'<stop offset="0%" stop-color="{BG}"/>',
        f'<stop offset="65%" stop-color="{PANEL}"/>',
        '<stop offset="100%" stop-color="#18181b"/>',
        "</linearGradient>",
        '<linearGradient id="bar" x1="0" y1="0" x2="0" y2="1">',
        f'<stop offset="0%" stop-color="{BLUE}" stop-opacity="0.95"/>',
        f'<stop offset="100%" stop-color="{BAR}" stop-opacity="0.38"/>',
        "</linearGradient>",
        '<filter id="softGlow" x="-30%" y="-30%" width="160%" height="160%">',
        '<feGaussianBlur stdDeviation="3" result="blur"/>',
        '<feMerge><feMergeNode in="blur"/><feMergeNode in="SourceGraphic"/></feMerge>',
        "</filter>",
        "</defs>",
        '<rect width="100%" height="100%" rx="18" fill="url(#bg)"/>',
        f'<rect x="1" y="1" width="{WIDTH - 2}" height="{HEIGHT - 2}" rx="17" fill="none" stroke="#334155" stroke-width="1"/>',
        f'<text x="32" y="42" fill="{TEXT}" font-size="22" font-family="Segoe UI, Arial, sans-serif" font-weight="700">C++ Repo Commit Chart</text>',
        f'<text x="32" y="66" fill="{MUTED}" font-size="13" font-family="Segoe UI, Arial, sans-serif">X axis: commit dates . Y axis: commits per day . Repo-only history</text>',
        f'<text x="{WIDTH - 32}" y="42" text-anchor="end" fill="{BLUE}" font-size="12" font-family="Segoe UI, Arial, sans-serif">Latest repo commit: {latest_label}</text>',
    ]

    for value in y_tick_values(y_max):
        y = y_for(value)
        elements.append(f'<line x1="{LEFT}" y1="{y:.2f}" x2="{WIDTH - RIGHT}" y2="{y:.2f}" stroke="{GRID}" stroke-width="1"/>')
        elements.append(f'<text x="{LEFT - 16}" y="{y + 4:.2f}" text-anchor="end" fill="{AXIS}" font-size="11" font-family="Segoe UI, Arial, sans-serif">{value}</text>')

    elements.append(f'<line x1="{LEFT}" y1="{TOP}" x2="{LEFT}" y2="{TOP + plot_height}" stroke="{AXIS}" stroke-width="1.2"/>')
    elements.append(f'<line x1="{LEFT}" y1="{TOP + plot_height}" x2="{WIDTH - RIGHT}" y2="{TOP + plot_height}" stroke="{AXIS}" stroke-width="1.2"/>')
    elements.append(f'<text x="22" y="{TOP + 88}" transform="rotate(-90 22 {TOP + 88})" fill="{AXIS}" font-size="11" font-family="Segoe UI, Arial, sans-serif">Commits</text>')

    for label_day in date_labels(start, end):
        x = x_for(label_day)
        elements.append(f'<line x1="{x:.2f}" y1="{TOP + plot_height}" x2="{x:.2f}" y2="{TOP + plot_height + 6}" stroke="{AXIS}" stroke-width="1"/>')
        elements.append(f'<text x="{x:.2f}" y="{TOP + plot_height + 24}" text-anchor="middle" fill="{AXIS}" font-size="11" font-family="Segoe UI, Arial, sans-serif">{format_date_label(label_day)}</text>')

    for x, y, count, day in points:
        if count <= 0:
            continue

        bar_x = x - bar_width / 2
        bar_y = y
        bar_height = TOP + plot_height - y
        title = html.escape(f"{day.isoformat()}: {count} commit{'s' if count != 1 else ''}")
        elements.extend(
            [
                f'<rect x="{bar_x:.2f}" y="{bar_y:.2f}" width="{bar_width:.2f}" height="{bar_height:.2f}" rx="5" fill="url(#bar)">',
                f"<title>{title}</title>",
                "</rect>",
            ]
        )

    elements.append(f'<polyline fill="none" stroke="{PURPLE}" stroke-width="3" stroke-linecap="round" stroke-linejoin="round" points="{line_points}" filter="url(#softGlow)"/>')

    for x, y, count, day in points:
        if count <= 0:
            continue

        title = html.escape(f"{day.isoformat()}: {count} commit{'s' if count != 1 else ''}")
        elements.extend(
            [
                f'<circle cx="{x:.2f}" cy="{y:.2f}" r="5.5" fill="{BLUE}" stroke="#e0f2fe" stroke-width="1.4">',
                f"<title>{title}</title>",
                "</circle>",
                f'<text x="{x:.2f}" y="{y - 11:.2f}" text-anchor="middle" fill="{TEXT}" font-size="11" font-family="Segoe UI, Arial, sans-serif" font-weight="700">{count}</text>',
            ]
        )

    elements.extend(
        [
            f'<text x="{LEFT}" y="{HEIGHT - 20}" fill="{AXIS}" font-size="11" font-family="Segoe UI, Arial, sans-serif">Range: {start.isoformat()} to {end.isoformat()}</text>',
            f'<text x="{WIDTH - RIGHT}" y="{HEIGHT - 20}" text-anchor="end" fill="{AXIS}" font-size="11" font-family="Segoe UI, Arial, sans-serif">Generated from local git log, excluding bot commits</text>',
            "</svg>",
        ]
    )

    return "\n".join(elements) + "\n"


def main() -> None:
    OUTPUT.parent.mkdir(parents=True, exist_ok=True)
    OUTPUT.write_text(build_svg(), encoding="utf-8")


if __name__ == "__main__":
    main()
