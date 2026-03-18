#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10,
 *        separated by comma and space, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0'); /* 1st putchar: print number */

		if (n != 9)
		{
			putchar(',');  /* 2nd putchar: comma */
			putchar(' ');  /* 3rd putchar: space */
		}
	}

	putchar('\n'); /* 4th putchar: newline */

	return (0);
}

