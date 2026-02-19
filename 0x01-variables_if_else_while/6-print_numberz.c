#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10, starting from 0,
 *        followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0'); /* 1st putchar: print digits 0-9 */

	putchar('\n'); /* 2nd putchar: newline */

	return (0);
}
