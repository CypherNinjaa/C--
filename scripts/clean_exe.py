import os
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent


def main() -> None:
    deleted = 0

    for current_dir, directories, files in os.walk(ROOT):
        directories[:] = [directory for directory in directories if directory != ".git"]

        for filename in files:
            if Path(filename).suffix.lower() == ".exe":
                executable = Path(current_dir) / filename
                executable.unlink()
                print(f"Deleted {executable.relative_to(ROOT)}")
                deleted += 1

    if deleted == 0:
        print("No .exe files found.")
    else:
        print(f"Deleted {deleted} .exe file(s).")


if __name__ == "__main__":
    main()
