#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints day of year and remaining days, accounting
 *                        for leap years
 * @month: month number
 * @day: day of year
 * @year: year
 */
void print_remaining_days(int month, int day, int year)
{
    int is_leap;

    /* Check if leap year */
    is_leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    /* Adjust day for leap year if past Feb */
    if (is_leap && month > 2)
        day++;

    printf("Day of the year: %d\n", day);
    if (is_leap)
        printf("Remaining days: %d\n", 366 - day);
    else
        printf("Remaining days: %d\n", 365 - day);
}
