# 0x03-debugging

## Project Description

This directory contains files to test the `positive_or_negative()` function.

The main task is to create a test file `0-main.c` that checks if the function prints the correct output when the input is 0.  
The function `positive_or_negative()` itself is provided by the evaluator and is not implemented here.

## Files

- `0-main.c` : Tests `positive_or_negative()` for zero input.  
- `main.h`   : Header file containing the prototype for `positive_or_negative()`.

## Compilation

To compile and test locally:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
./0-main
