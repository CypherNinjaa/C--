from collections import Counter
from datetime import date, timedelta
from pathlib import Path
import calendar
import html
import subprocess


OUTPUT = Path("assets/commit-graph.svg")
WEEKS = 26
CELL = 16
GAP = 6
LEFT = 92
TOP = 96
RIGHT = 170
BOTTOM = 56

COLORS = [
    "#1f2937",
    "#0e7490",
    "#0284c7",
    "#2563eb",
    "#7c3aed",
    "#f472b6",
]


def run_git_log(start: date) -> list[str]:
    result = subprocess.run(
        [
            "git",
            "log",
            f"--since={start.isoformat()} 00:00:00",
            "--date=format:%Y-%m-%d",
            "--pretty=format:%ad%x09%an%x09%ae",
        ],
        check=True,
        capture_output=True,
        text=True,
    )
    return [line for line in result.stdout.splitlines() if line.strip()]


def run_latest_commit_date() -> str:
    result = subprocess.run(
        [
            "git",
            "log",
            "-1",
            "--date=format:%Y-%m-%d %H:%M",
            "--pretty=format:%ad",
            "--",
            ".",
            ":(exclude)assets/commit-graph.svg",
        ],
        check=True,
        capture_output=True,
        text=True,
    )
    latest = result.stdout.strip()
    return f"{latest} repo time" if latest else "No commits yet"


def is_bot_commit(author_name: str, author_email: str) -> bool:
    identity = f"{author_name} {author_email}".lower()
    return "github-actions" in identity or "[bot]" in identity


def count_commits(start: date) -> Counter:
    counts = Counter()

    for line in run_git_log(start):
        parts = line.split("\t")
        if len(parts) != 3:
            continue

        commit_day, author_name, author_email = parts
        if is_bot_commit(author_name, author_email):
            continue

        counts[commit_day] += 1

    return counts


def color_for(count: int) -> str:
    if count <= 0:
        return COLORS[0]
    if count >= len(COLORS):
        return COLORS[-1]
    return COLORS[count]


def build_svg() -> str:
    today = date.today()
    start = today - timedelta(days=(WEEKS * 7) - 1)
    start -= timedelta(days=(start.weekday() + 1) % 7)
    end = start + timedelta(days=(WEEKS * 7) - 1)
    counts = count_commits(start)

    graph_width = (WEEKS * CELL) + ((WEEKS - 1) * GAP)
    graph_height = (7 * CELL) + (6 * GAP)
    width = LEFT + graph_width + RIGHT
    height = TOP + graph_height + BOTTOM
    generated_at = run_latest_commit_date()

    elements = [
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="{height}" viewBox="0 0 {width} {height}" role="img" aria-labelledby="title desc">',
        "<title id=\"title\">Repository commit graph</title>",
        "<desc id=\"desc\">A repo-only commit heatmap generated from this repository's git history.</desc>",
        "<defs>",
        '<linearGradient id="bg" x1="0" y1="0" x2="1" y2="1">',
        '<stop offset="0%" stop-color="#0f172a"/>',
        '<stop offset="55%" stop-color="#111827"/>',
        '<stop offset="100%" stop-color="#18181b"/>',
        "</linearGradient>",
        '<filter id="glow" x="-25%" y="-25%" width="150%" height="150%">',
        '<feGaussianBlur stdDeviation="2.4" result="blur"/>',
        '<feMerge><feMergeNode in="blur"/><feMergeNode in="SourceGraphic"/></feMerge>',
        "</filter>",
        "</defs>",
        '<rect width="100%" height="100%" rx="18" fill="url(#bg)"/>',
        '<rect x="1" y="1" width="{0}" height="{1}" rx="17" fill="none" stroke="#334155" stroke-width="1"/>'.format(width - 2, height - 2),
        '<circle cx="{0}" cy="44" r="68" fill="#2563eb" opacity="0.12"/>'.format(width - 74),
        '<circle cx="70" cy="{0}" r="80" fill="#7c3aed" opacity="0.10"/>'.format(height - 28),
        '<text x="32" y="42" fill="#e5e7eb" font-size="22" font-family="Segoe UI, Arial, sans-serif" font-weight="700">C++ Repo Commit Graph</text>',
        '<text x="32" y="66" fill="#94a3b8" font-size="13" font-family="Segoe UI, Arial, sans-serif">Auto-generated from this repository only</text>',
        f'<text x="{width - 32}" y="42" text-anchor="end" fill="#38bdf8" font-size="12" font-family="Segoe UI, Arial, sans-serif">Last update: {generated_at}</text>',
    ]

    for index, label in enumerate(["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]):
        y = TOP + index * (CELL + GAP) + 13
        elements.append(
            f'<text x="32" y="{y}" fill="#64748b" font-size="11" font-family="Segoe UI, Arial, sans-serif">{label}</text>'
        )

    month_labels = {}
    day = start
    while day <= end:
        column = (day - start).days // 7
        if day.day <= 7 and day.month not in month_labels:
            month_labels[day.month] = column
        day += timedelta(days=1)

    for month, column in month_labels.items():
        x = LEFT + column * (CELL + GAP)
        elements.append(
            f'<text x="{x}" y="{TOP - 14}" fill="#64748b" font-size="11" font-family="Segoe UI, Arial, sans-serif">{calendar.month_abbr[month]}</text>'
        )

    day = start
    while day <= end:
        column = (day - start).days // 7
        row = (day.weekday() + 1) % 7
        x = LEFT + column * (CELL + GAP)
        y = TOP + row * (CELL + GAP)
        count = counts.get(day.isoformat(), 0) if day <= today else 0
        opacity = "0.38" if day > today else "1"
        title = html.escape(f"{day.isoformat()}: {count} commit{'s' if count != 1 else ''}")

        elements.extend(
            [
                f'<rect x="{x}" y="{y}" width="{CELL}" height="{CELL}" rx="4" fill="{color_for(count)}" opacity="{opacity}" filter="url(#glow)">',
                f"<title>{title}</title>",
                "</rect>",
            ]
        )
        day += timedelta(days=1)

    legend_x = LEFT + graph_width + 32
    legend_y = TOP + 12
    elements.extend(
        [
            f'<text x="{legend_x}" y="{legend_y}" fill="#cbd5e1" font-size="12" font-family="Segoe UI, Arial, sans-serif" font-weight="600">Daily commits</text>',
            f'<text x="{legend_x}" y="{legend_y + 22}" fill="#94a3b8" font-size="11" font-family="Segoe UI, Arial, sans-serif">Less</text>',
        ]
    )

    for index, color in enumerate(COLORS):
        x = legend_x + 35 + index * 20
        y = legend_y + 11
        elements.append(f'<rect x="{x}" y="{y}" width="13" height="13" rx="3" fill="{color}"/>')

    elements.append(
        f'<text x="{legend_x + 35 + len(COLORS) * 20 + 2}" y="{legend_y + 22}" fill="#94a3b8" font-size="11" font-family="Segoe UI, Arial, sans-serif">More</text>'
    )

    elements.extend(
        [
            f'<text x="32" y="{height - 28}" fill="#64748b" font-size="11" font-family="Segoe UI, Arial, sans-serif">Window: last {WEEKS} weeks</text>',
            f'<text x="{width - 32}" y="{height - 28}" text-anchor="end" fill="#64748b" font-size="11" font-family="Segoe UI, Arial, sans-serif">Source: local git log on this repo</text>',
            "</svg>",
        ]
    )

    return "\n".join(elements) + "\n"


def main() -> None:
    OUTPUT.parent.mkdir(parents=True, exist_ok=True)
    OUTPUT.write_text(build_svg(), encoding="utf-8")


if __name__ == "__main__":
    main()
