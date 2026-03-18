#include "main.h"
#include <stddef.h> /* needed for NULL */

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Return: pointer to first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c) /* check if c is '\0' at the end */
		return (s);

	return (NULL);
}
