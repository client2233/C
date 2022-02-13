#include <stdio.h>

#define MAX 1024

int main()
{
    int num, a = 0;
    _Bool bool;

    printf("请输入一个整数：");
    scanf("%d", &num);

    int reslut[num];

    for (int i=3; i<num+3; i++)
    {
        reslut[i-3] = i*i*i;
    }

    int nums[num][MAX];

    for (int i=0; i<num; i++)
    {
        for(int j=0; j<(i+3); j++)
        {
            nums[i][j] = (i+3) * (i+3) - (i+3) + 1 + j * 2;
            a += nums[i][j];
        }

        for (int k=0; k<(i+3); k++)
        {
            if (reslut[i]==a)
                bool = 1;
            else
                bool = 0;
        }
        a = 0;
    }

    if(bool)
        printf ("经验证，3 ~ %d 之间所有的整数均符合尼科彻斯定理！\n", num);

    printf("是否打印所有式子(y/n): ");

    getchar();

    if(getchar()=='y')
    {
        printf("3^3 = 27 =7+9+11\n");

        for (int i=1; i<num-3; i++)
        {
            printf("%d^3 = %d = %d+%d...%d\n", i+3, reslut[i], nums[i][0],nums[i][1], nums[i][i+2]);
        }
    }

    return 0;
}