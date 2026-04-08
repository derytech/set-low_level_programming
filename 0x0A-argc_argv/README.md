# 0x0A. argc, argv

This project focuses on understanding how to use command-line arguments in C using `argc` and `argv`.

## Task 0: It ain't what they call you, it's what you answer to

### Description
Write a program that prints its name, followed by a new line.

- The program should print the name used to execute it.
- If the program is renamed, it should print the new name without recompilation.
- The full path should not be removed.

### Files
- `0-whatsmyname.c` - Contains the implementation of the program
- `main.h` - Header file with function prototypes

### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o mynameis
