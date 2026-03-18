#include <stdio.h>
#include "main.h"

/**
 * main - check the swap_int function
 *
 * Return: Always 0
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);   /* show values before swapping */
    swap_int(&a, &b);               /* swap the values of a and b */
    printf("a=%d, b=%d\n", a, b);   /* show values after swapping */

    return (0);
}
