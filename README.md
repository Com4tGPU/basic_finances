# BASIC_FINANCES

THIS IS NOT AN ACTUAL BANKING APP AND SHOULD NOT BE USED AS FINANCIAL ADVICE.

Basic Finances is a small C++ budgeting program designed for learning and demonstration purposes. It allows you to:
- set a starting balance
- add or subtract money from the balance
- use a built-in calculator
- protect access with a password

## Features
- Password-protected access
- Built-in calculator
- Balance tracking
- Add or subtract transactions
- Simple C++ project structure for easy learning and modification

## Project files
- `src/finances.cpp` — main application source code
- `Makefile` — builds the executable using `g++`
- `LICENSE` — project license
- `README.md` — project documentation

## Pre-release status
This project is currently in a pre-release / testing stage. Features and behavior may change before the next stable version.

Use this software for educational purposes only and do not rely on it for actual financial decisions or banking operations.

## How to build

### Linux/macOS
From the project root, run:

```bash
make
```

This will build the executable:

```bash
./basic_finances
```

To remove build artifacts:

```bash
make clean
```

### Windows
If you are building on Windows with a C++ toolchain, you can compile with:

```powershell
g++ Code/Finances.cpp -o basic_finances.exe
```

Then run:

```powershell
basic_finances.exe
```

## How to change the password/username
1. Open src/finances.cpp.
2. find the variable containing username and password (marked by comment).
3. change to your liking!

## Example usage
- Start the program
- Enter the password/username
- Set an initial balance
- Use option `1` to calculate
- Use option `2` to add or subtract an amount
- Use option `3` to exit

## Disclaimer
This project is for learning and demonstration purposes only. It is not a real banking app, should not be used for actual financial decisions, and is not a substitute for professional financial advice.
