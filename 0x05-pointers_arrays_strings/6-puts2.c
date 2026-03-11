#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input string
 *
 * Description: prints every other character of str, starting with the first
 *              character, followed by a new line. Stops exactly at '\0'.
 */
void puts2(char *str)
{
	int i;

	if (!str)
		return;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		/* only print printable characters */
		if (str[i] >= 32 && str[i] <= 126)
			_putchar(str[i]);
	}

	_putchar('\n');
}
