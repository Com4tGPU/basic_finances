# basic_finances

THIS IS NOT AN ACTUAL BANKING APP AND SHOULD NOT BE USED AS FINANCIAL ADVICE.

This is a small C++ budgeting program that lets you:
- set a starting balance
- add or subtract money from the balance
- use a built-in calculator

## Features
- PIN-protected access
- Built-in calculator
- Balance tracking
- Add or subtract transactions

## How to run

### Windows executable (.exe)
If you have a compiled Windows build, you can run the `.exe` directly by double-clicking it or by opening it in Command Prompt:

```powershell
basic_finances.exe
```

### From source
1. Compile the program:
   ```bash
   g++ Code/Finances.cpp -o finances
   ```
2. Run it:
   ```bash
   ./finances
   ```

## How to change the PIN
1. Open `Code/Finances.cpp`
2. Find the line with:
   `double pass(3322);`
3. Replace `3322` with your preferred PIN

## Disclaimer
This project is for learning and demonstration purposes only. It is not a real banking app and should not be used for actual financial decisions.
