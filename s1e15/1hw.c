#include <stdio.h>
#include <math.h>

int main(void)
{
    int num = 10000;
    int count = 0;
    _Bool flag;

    for (int j=5; j<=num; j++)
    {
        for (int i=2; i<=sqrt(j); i++)
        {
            if (j%i==0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            count++;
        }
        else
        {
            flag = 1;
        }
    }

    printf("%d以内共有%d个素数！\n", num, count);

    return 0;
}