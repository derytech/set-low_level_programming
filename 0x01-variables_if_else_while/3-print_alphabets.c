#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then uppercase,
 *        followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c); /* 1st putchar: lowercase letters */

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c); /* 2nd putchar: uppercase letters */

	putchar('\n'); /* 3rd putchar: newline */

	return (0);
}

