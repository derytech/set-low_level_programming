#include "main.h"

/**
 * main - check the _islower function.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');  /* Should print 0 */
    r = _islower('o');
    _putchar(r + '0');  /* Should print 1 */
    r = _islower(108);
    _putchar(r + '0');  /* 108 is 'l', should print 1 */
    _putchar('\n');

    return (0);
}
