from pathlib import Path


README = Path("README.md")
ROOT_LABEL = "C++/"
START_MARKER = "<!-- FILE_TREE_START -->"
END_MARKER = "<!-- FILE_TREE_END -->"

EXCLUDED_DIRS = {
    ".git",
    ".github",
    "assets",
    "scripts",
    "__pycache__",
}

EXCLUDED_SUFFIXES = {
    ".exe",
    ".pyc",
}


def should_skip(path: Path) -> bool:
    if any(part in EXCLUDED_DIRS for part in path.parts):
        return True
    if path.suffix.lower() in EXCLUDED_SUFFIXES:
        return True
    if path.name in {"README.md", ".gitignore"}:
        return True
    return False


def visible_children(path: Path) -> list[Path]:
    children = [child for child in path.iterdir() if not should_skip(child.relative_to(Path(".")))]
    return sorted(children, key=lambda child: (not child.is_dir(), child.name.lower()))


def build_tree(path: Path, prefix: str = "") -> list[str]:
    lines = []
    children = visible_children(path)

    for index, child in enumerate(children):
        is_last = index == len(children) - 1
        connector = "`-- " if is_last else "|-- "
        lines.append(f"{prefix}{connector}{child.name}{'/' if child.is_dir() else ''}")

        if child.is_dir():
            extension = "    " if is_last else "|   "
            lines.extend(build_tree(child, prefix + extension))

    return lines


def readme_block() -> str:
    tree_lines = [ROOT_LABEL, *build_tree(Path("."))]
    return "\n".join(
        [
            START_MARKER,
            "```text",
            *tree_lines,
            "```",
            END_MARKER,
        ]
    )


def replace_between_markers(content: str, replacement: str) -> str:
    start = content.index(START_MARKER)
    end = content.index(END_MARKER, start) + len(END_MARKER)
    return content[:start] + replacement + content[end:]


def main() -> None:
    content = README.read_text(encoding="utf-8")
    updated = replace_between_markers(content, readme_block())
    README.write_text(updated, encoding="utf-8")


if __name__ == "__main__":
    main()
