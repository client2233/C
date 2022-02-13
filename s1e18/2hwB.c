#include <stdio.h>

int main()
{
    float pm[3][12] = {{0, 0, 0, 0, 0, 0, 0, 31.3, 35.5, 58.7, 49.6, 55.5},
                       {59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5},
                       {34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, 0, 0, 0, 0}};
    float(*p)[12] = pm;
    float min, max;
    int i, j;

    min = 31.3;
    max = min;

    for (i=0; i<3; i++)
    {
        for(j=0; j<12; j++)
        {
            if (*(*(p + i) + j)&&*(*(p + i) + j + 1))
            {
                min = *(*(p + i) + j) < min ? *(*(p + i) + j) : min;
                max = *(*(p + i) + j) > max? *(*(p + i) + j) : max;

            }
        }
    }
    printf("最小值: %.2f, 最大值: %.2f\n", min, max);

    for (i=0; i<3; i++)
    {
        for(j=0; j<12; j++)
        {
            if(*(*(p+i)+j))
            {
                if (i==1&&j==5)
                    printf("2015年 6月: *\n");
                else
                {    
                    printf("%d年%2d月: ", i+2014, j+1);
                    for(int k=0; k<(int)(*(*(p+i)+j)-20); k++)
                        printf("*");
                    printf("\n");
                }
            }
        }
    }

    return 0;
}