#include "main.h"

/**
 * _isdigit_str - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if valid, 0 if not
 */
int _isdigit_str(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0, result = 0;

	while (s[i] != '\0')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result);
}

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char error[] = "Error\n";

	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!_isdigit_str(argv[i]))
		{
			int j = 0;

			while (error[j] != '\0')
			{
				_putchar(error[j]);
				j++;
			}
			return (1);
		}
		sum += _atoi(argv[i]);
	}

	print_number(sum);
	_putchar('\n');

	return (0);
}
