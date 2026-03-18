#include "main.h"

/**
 * main - check the print_last_digit function
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    /* Test positive number */
    r = print_last_digit(98);
    _putchar(' '); /* optional separator */
    _putchar(r + '0');
    _putchar('\n');

    /* Test zero */
    r = print_last_digit(0);
    _putchar(' '); /* optional separator */
    _putchar(r + '0');
    _putchar('\n');

    /* Test negative number */
    r = print_last_digit(-1024);
    _putchar(' '); /* optional separator */
    _putchar(r + '0');
    _putchar('\n');

    return (0);
}
