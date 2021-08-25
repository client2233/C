#include <stdio.h>
#include <math.h>

int main (void)
{
    int i;
    double sum=0, tmp, weight;

    for (i=0; i<64; i++)
    {
        tmp = pow(2, i);
        sum = sum + tmp;
    }

    weight = sum/25000;
    
    printf ("�ằ��Ӧ�ø��������%.0lf������\n",sum);
    printf("���ÿ25000������Ϊ1kg����ôӦ�ø�%.0lfkg���ӣ�\n", weight);

    return 0;
}