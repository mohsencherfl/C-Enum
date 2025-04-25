#include <stdio.h>
#include <stdlib.h>

typedef enum months
{
    JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
} Months;

int main()
{
    Months month;
    char* monthsNames[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int salaries[13] = {0, 1000, 1200, 1350, 2300, 4600, 6650, 7000, 7820, 8500, 8900, 9500, 10000};
    int bonus[13] = {0, 50, 0, 0, 100, 100, 0, 0, 150, 0, 175, 0, 200};

    for(month = JAN; month <= DEC; month++)
    {
        printf("%s%10d \n", monthsNames[month], salaries[month] + bonus[month]);
    }

    return 0;
}

