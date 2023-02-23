#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year of the leap year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 && year % 400 == 0)
	{
		if ((((month == 4 && day > 30) || (month == 6 && day > 30) || (month == 11 && day > 30)) && (month >= 1 && month <= 31)) && (day >= 1 && day <= 31))
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
	}
	else if ((year % 4 != 0 && year % 400 != 0) && ((month == 2 && day > 28) || (month == 4 && day > 31) || (month == 6 && day > 30) || (month == 11 && day > 30)))
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}