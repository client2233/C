#include <stdio.h>
#include <math.h>

int main (void)
{
    unsigned int result = pow(2, 32) - 1;

    printf ("result = %u\n", result);

    return 0;
}