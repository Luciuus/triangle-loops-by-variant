# triangle-loops-by-variant
what if a triangle loop have variations?

# Console Triangle Generator

A simple and interactive C++ console application that generates different types of triangle patterns, including standard triangles, inverted triangles, and an animated Christmas tree with flashing ornaments.

## Features

- **Standard Triangle (`StdTri`)**: Generates a classic aligned triangle using `O` characters and displays the total count of printed markers.
- **Inverted Triangle (`InvTri`)**: Generates an upside-down triangle pattern.
- **Animated Christmas Tree (`ChristmasTri`)**: Generates a green holiday tree made of custom characters with blinking colorful ornaments (red and bright yellow) that refresh every 500 milliseconds. Includes a dynamic tree stem that auto-scales based on the row size.

## Prerequisites

To compile and run this project, you need:
- A C++ compiler supporting at least **C++11** (due to the use of `<thread>` and `<chrono>`).
- A terminal/console that supports **ANSI Escape Codes** for text coloring (standard on modern Linux/macOS terminals and Windows 10+ Command Prompt/PowerShell).

## Getting Started

### 1. Clone or Download
Save the source code into a file named `main.cpp`.

### 2. Compilation
Open your terminal and run the following command to compile the program:

```bash
g++ -std=c++11 main.cpp -o TriangleGenerator
```

### 3. Execution
Run the compiled executable:

#### Windows:
```cmd
TriangleGenerator.exe
```

#### Linux / macOS:
```bash
./TriangleGenerator
```

## Code Structure

- `StdTri()`: Handles standard triangle logic and counts printed elements.
- `InvTri()`: Handles inverted triangle logic.
- `ChristmasTri()`: Houses the infinite loop for the animated tree rendering, color formatting, and dynamic stem calculations.
- `ClearScreen()`: Platform-dependent utility to clear the console (optimized for Windows).
- `main()`: The entry point of the application. Currently configured to launch `StdTri()`.

> **Note:** To try out the inverted triangle or the animated Christmas tree, change the function call inside `main()` from `StdTri();` to `InvTri();` or `ChristmasTri();`.
