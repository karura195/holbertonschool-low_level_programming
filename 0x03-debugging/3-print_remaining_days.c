#include "holberton.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int leap_day = 366 - day;
int rem_day = 365 - day;
int d = day - 31;

	if (year % 4 == 0)
	{
		if (month > 2 && day > 60)
		{
		day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", leap_day);
		}
		else
		{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", leap_ day);
		}
	}
	else
	{
		if (month == 2 && day == 60)
		{
		printf("Invalid date: %02d/%02d/%04d\n", month, d, year);
		}
		else
		{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", rem_day);
		}
	}
}
