#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints the day of year and remaining days,
 *                        correctly handling leap years
 * @month: month in number format
 * @day: day of month (converted to day of year)
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int is_leap;

	/* Determine if leap year */
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		is_leap = 1;
	else
		is_leap = 0;

	/* Check for invalid Feb 29 in non-leap years */
	if (!is_leap && month == 2 && day == 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		return;
	}

	/* Only increment days for dates AFTER Feb 29 in leap years */
	if (is_leap && day > 59)
		day++;

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", (is_leap ? 366 : 365) - day);
}
