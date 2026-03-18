# 0x07. C - Pointers, Arrays and Strings

## 0-memset

**File:** `0-memset.c`  

This file contains a function `_memset` that fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`. It works exactly like the standard C library `memset` function.

### Prototype

```c
char *_memset(char *s, char b, unsigned int n);
