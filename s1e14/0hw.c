#include <stdio.h>

int main (void)
{
    printf ("公斤 -- 花费(元)\n");

    for (int i=0; i<20; i++)
    {
        printf ("%4d -- %4d\n", i+1, i*14+23);
    }

    return 0;
}