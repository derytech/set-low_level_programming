#include "main.h"
#include <stddef.h>  /* for NULL */

void reset_to_98(int *n)
{
	if (n != NULL)
		*n = 98;
}
