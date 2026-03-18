#include <stdio.h>
#include "main.h"

/**
 * main - check rev_string function
 *
 * Return: Always 0
 */
int main(void)
{
    char str1[] = "Hello, ALX!";
    char str2[] = "";
    char str3[] = "C programming";

    rev_string(str1);
    rev_string(str2);
    rev_string(str3);

    printf("%s\n", str1); /* !XLA ,olleH */
    printf("%s\n", str2); /* (empty line) */
    printf("%s\n", str3); /* gnimmargorp C */

    return (0);
}
