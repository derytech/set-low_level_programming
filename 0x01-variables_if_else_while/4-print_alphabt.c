#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e,
 *        followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c); /* 1st putchar: letters except e and q */
	}

	putchar('\n'); /* 2nd putchar: newline */

	return (0);
}

