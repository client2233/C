#include <stdio.h>

#define NUM 10

int main(void)
{
    int s[NUM];
    int i, sum = 0;

    for(i=0; i<10; i++)
    {
        printf ("pls input the %i student's marks:", i+1);
        scanf ("%d", &s[i]);
        sum += s[i];
    }

    printf ("the maks is %.2f\n", (double)sum/NUM);

    return 0;
}
