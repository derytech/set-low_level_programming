#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
    int i = 0;
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    if (length % 2 == 0)
        i = length / 2;
    else
        i = (length + 1) / 2;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');
}
