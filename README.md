# BASIC_FINANCES

**Latest release: [v0.1.1 beta](https://github.com/Com4tGPU/basic_finances/releases/tag/v0.1.1)** — a pre-release that adds credential login and moves the source into the `src/` directory.

> **Disclaimer:** This is not an actual banking app and must not be used for financial advice or real financial decisions. It is an educational project only.

Basic Finances is a small C++ program that lets you set a starting balance, add or subtract amounts, and use a basic calculator.

## Features

- Username and password prompt before entering the program
- Set and view a balance
- Add or subtract an amount from the balance
- Built-in calculator for addition, subtraction, multiplication, and division
- Menu-based command-line interface

## Download the release

Download the Windows executable (`Finances.exe`) or the `Makefile` from the [v0.1.1 beta release page](https://github.com/Com4tGPU/basic_finances/releases/tag/v0.1.1). This is a pre-release intended for testing and demonstration; behavior may change.

## Build from source

The project requires a C++17-compatible compiler and GNU Make.

### Linux/macOS

From the repository root, run:

```bash
make
./basic_finances
```

To remove the generated executable and object files:

```bash
make clean
```

### Windows

With `g++` installed, compile the source from the repository root:

```powershell
g++ -std=c++17 -Wall -Wextra -O2 src/Finances.cpp -o Finances.exe
```

Then run:

```powershell
.\Finances.exe
```

## Login credentials

The current credentials are defined in `src/Finances.cpp` and can be changed there. The source currently uses `user` as the username and `password123` as the password. These are hard-coded demonstration credentials, not secure authentication; do not use this program to protect sensitive information.

## Using the program

After logging in, enter a starting balance. In the main menu:

1. Choose **Calculator** to enter two whole numbers and an operator (`+`, `-`, `*`, or `/`).
2. Choose **Add charge/deposit** to enter a positive or negative amount to apply to the balance.
3. Choose **Exit** to quit.

## Project files

- `src/Finances.cpp` — application source code
- `Makefile` — builds the `basic_finances` executable with `g++`
- `LICENSE` — project license
- `README.md` — project documentation

Use this software for learning and demonstration purposes only. It is not a real banking app, is not financial advice, and is not a substitute for professional financial guidance.
