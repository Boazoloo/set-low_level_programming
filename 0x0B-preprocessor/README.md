# 0x0B. C - Preprocessor

## Description
This project covers the use of **C preprocessor directives**. It demonstrates the creation of object-like and function-like macros, include guards, and basic file name macros.

## Files

| File | Description |
|------|-------------|
| `0-object_like_macro.h` | Defines a macro `SIZE` as an abbreviation for the token `1024`. |
| `1-pi.h` | Defines a macro `PI` as `3.14159265359`. |
| `2-main.c` | Prints the name of the file it was compiled from using the `__FILE__` macro. |
| `3-function_like_macro.h` | Defines a function-like macro `ABS(x)` that computes the absolute value of `x`. |
| `4-sum.h` | Defines a function-like macro `SUM(x, y)` that computes the sum of `x` and `y`. |

## Compilation

To compile the test files:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file>.c -o <output>
