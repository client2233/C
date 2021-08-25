#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;

    printf ("请输入一个数");
    scanf("%d", &a);

    b = pow(a, 5);

    printf ("%d的五次方是%d\n", a, b);

    return 0;
}