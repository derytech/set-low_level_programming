#include "main.h"
#include <stddef.h>

/**
 * reset_to_98 - updates the value pointed to by n to 98
 * @n: pointer to an integer to be updated
 *
 * Description: This function takes a pointer to an int and sets
 * the value it points to 98.
 */
void reset_to_98(int *n)
{
	if (n != NULL)
		*n = 98;
}
