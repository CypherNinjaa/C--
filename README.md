# Data Structures & Algorithms in C++

A hands-on DSA learning repository built from small, focused C++ programs. It follows the path from language fundamentals to array and vector problems, with practice organized by topic.

The examples are learning exercises rather than a single application: most `.cpp` files are standalone programs with their own `main()`.

## Learning path

| Area | Topics |
|---|---|
| `Module 02` | C++ fundamentals, variables, types, operators, and input/output |
| `Module 03` | Conditions, branching, and decision-making problems |
| `Module 04` | Loops, number problems, and iteration |
| `Module 05` | Pattern printing and nested-loop practice |
| `Module 06` | Functions, parameters, return values, and decomposition |
| `Module 07` | Pointers, references, and memory fundamentals |
| `Module 08` | Arrays, array operations, and linear search |
| `Module 9` | Vectors and array problems, including searching, sorting, merging, and rotation |
| `Module 10` | 2D array study materials and assignments |
| `revision` | Review problems for array and vector techniques |
| `LeetCode` | Selected problem-solving exercises |

## Compile and run one program

Compile one source file at a time. Many files define their own `main()`, so compiling multiple exercises together can cause duplicate-entry-point errors.

From the repository root with `g++`:

```bash
g++ -std=c++17 "Module 9/vectorBasics.cpp" -o vectorBasics
./vectorBasics
```

On Windows PowerShell:

```powershell
g++ -std=c++17 "Module 9\vectorBasics.cpp" -o vectorBasics.exe
.\vectorBasics.exe
```

Replace the source path with the exercise you want to run. The program's expected input and output are defined by that individual exercise.

## Delete compiled executables

From the repository root, run:

```bash
python scripts/clean_exe.py
```

The script scans the repository recursively, deletes `.exe` files, and reports each deletion. It skips Git's internal `.git` directory.

## A useful problem-solving loop

1. Read the problem and identify its inputs, outputs, and constraints.
2. Work through a small example by hand before coding.
3. Implement the simplest correct approach.
4. Test edge cases such as empty or single-element input, duplicates, and boundary values when they apply.
5. State the time and space complexity; optimize only when the constraints call for it.

## Repository conventions

- Browse by module and topic; each source file is an independent exercise.
- Keep new exercises with the related topic instead of building one large program.
- Use descriptive names and keep examples focused on the concept being practiced.
- The module overview above is intentionally high-level; new exercise files do not need README edits.
