#include <stdio.h>

int main (void)
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year;
    _Bool a;

    printf ("pls input a year:\n");
    scanf ("%d", &year);

    if (year%100)   //判断闰年
    {
        if (year%4)
        {
            a = 0;
        }
        else
        {
            a = 1;
        }
    }
    else
    {
        if (year%400)
        {
            a = 0;
        }
        else
        {
            a = 1;
        }
    }

    if (a)
    {
        month[1] += 1;
    }

    for (int i=0; i<12; i++)
    {
        printf("%2d月份：%d\n", i+1, month[i]);
    }

    return 0;
}