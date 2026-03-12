#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	while (s[i] != '\0')
		i++;

	i--;
	for (j = 0; j < i; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
