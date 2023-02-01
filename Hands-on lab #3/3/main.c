#include <stdio.h>

int isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

int numOfDays(int month, int year)
{
    switch (month)
    {
    case 2:
        if (isLeapYear(year))
            return 29;
        else
            return 28;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        return 31;
    }
}

int main()
{
    int month, year;
    printf("Enter a month: ");
    scanf("%d", &month);
    printf("Enter a year: ");
    scanf("%d", &year);

    printf("month %d of %d has %d days", month, year, numOfDays(month, year));

    return 0;
}