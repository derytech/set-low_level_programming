#include "main.h"

/**
 * main - check the _isalpha function
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');  /* Uppercase letter, prints 1 */
    r = _isalpha('o');
    _putchar(r + '0');  /* Lowercase letter, prints 1 */
    r = _isalpha(108);
    _putchar(r + '0');  /* 108 is 'l', prints 1 */
    r = _isalpha(';');
    _putchar(r + '0');  /* Non-letter, prints 0 */
    _putchar('\n');

    return (0);
}
