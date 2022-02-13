#include <stdio.h>

#define MAX 1024

int main ()
{
    int num, result;
    int nums[MAX];

    printf ("请输入一个整数：");
    scanf ("%d", &num);

    result = num*num*num;

    for (int i=0; i<num; i++)
    {
        nums[i] = num*num - num + 1 + i*2;
    }

    if (num==3)
        printf("%d = %d + %d + %d\n", result, nums[0], nums[1], nums[num-1]);
    else
        printf("%d = %d + %d +...+ %d\n", result, nums[0], nums[1], nums[num-1]);

    return 0;   
}