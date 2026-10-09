from pathlib import Path
import re


README = Path("README.md")
ROOT_LABEL = "C++/"
START_MARKER = "<!-- FILE_TREE_START -->"
END_MARKER = "<!-- FILE_TREE_END -->"
MODULE_NAME = re.compile(r"^Module\s+(\d+)$", re.IGNORECASE)


def module_directories() -> list[Path]:
    modules = [
        path
        for path in Path(".").iterdir()
        if path.is_dir() and MODULE_NAME.fullmatch(path.name)
    ]
    return sorted(modules, key=lambda path: int(MODULE_NAME.fullmatch(path.name).group(1)))


def readme_block() -> str:
    modules = module_directories()
    tree_lines = [ROOT_LABEL]
    for index, module in enumerate(modules):
        connector = "`-- " if index == len(modules) - 1 else "|-- "
        tree_lines.append(f"{connector}{module.name}/")

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
