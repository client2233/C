#include <stdio.h>

int main (void)
{
    int r = 5;
    float c;
    float s;
    c = 2*3.14*r;
    s = 3.14*r*r;

    printf ("半径为%d的圆， 周长是%.2f, 面积是%.2f", r, c, s);

    return 0;
}