#include <stdio.h>
#include "main.h"

/**
 * main - check the _strlen function
 *
 * Return: Always 0
 */
int main(void)
{
    char *str1 = "Hello, ALX!";
    char *str2 = "";
    char *str3 = "C programming";

    printf("Length of '%s': %d\n", str1, _strlen(str1));
    printf("Length of '%s': %d\n", str2, _strlen(str2));
    printf("Length of '%s': %d\n", str3, _strlen(str3));

    return (0);
}
