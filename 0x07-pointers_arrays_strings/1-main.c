#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints a buffer in hexadecimal
 * @buffer: pointer to the memory to print
 * @size: number of bytes to print
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        if (i % 10 == 0 && i != 0)
            printf("\n");
        else if (i != 0)
            printf(" ");
        printf("0x%02x", (unsigned char)buffer[i]);
    }
    printf("\n");
}

/**
 * main - check the _memcpy function
 *
 * Return: Always 0
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);

    return (0);
}
