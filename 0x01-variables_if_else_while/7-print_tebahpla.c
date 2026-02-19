#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 *        followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c); /* 1st putchar: letters from z to a */

	putchar('\n'); /* 2nd putchar: newline */

	return (0);
}

