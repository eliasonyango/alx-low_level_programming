#include "main.h"

/**
 * convert_day - converts day of month to day of year, taking leap year into account
 * @month: month in number format
 * @day: day of month
 *
 * Return: day of year
 */
int convert_day(int month, int day)
{
    int dayOfYear = 0;
    int i;

    for (i = 1; i < month; i++)
    {
        switch (i)
        {
            case 2:
                dayOfYear += 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dayOfYear += 30;
                break;
            default:
                dayOfYear += 31;
                break;
        }
    }

    dayOfYear += day;
    return (dayOfYear);
}
