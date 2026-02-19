#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase,
 *        followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0'); /* 1st putchar: digits 0-9 */

	for (n = 0; n < 6; n++)
		putchar(n + 'a'); /* 2nd putchar: letters a-f */

	putchar('\n'); /* 3rd putchar: newline */

	return (0);
}
