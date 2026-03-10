#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Only 2 _putchar calls allowed
 */
void print_alphabet_x10(void)
{
    int i, j;
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 26; j++)
            _putchar(alphabet[j]); /* 1st _putchar */
        _putchar('\n');            /* 2nd _putchar */
    }
}
