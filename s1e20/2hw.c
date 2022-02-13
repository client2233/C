#include <stdio.h>
#include <string.h>

#define MAX 1024

int main()
{
    char sntc[5][MAX];
    int i, j=0;
    char ch;
    int tmp, min, max;

    for (i=0; i<5; i++)
    {
        printf("请输入%d句话: ", i+1);
        for (j = 0; (ch = getchar()) != '\n'; j++)
        {
            sntc[i][j] = ch;
        }
        sntc[i][j] = '\0';
        
    }

    min = 0;
    max = min;

    printf ("你输入了下边5句话：\n");
    for(i=0; i<5; i++)
    {
        printf ("%s\n", sntc[i]);
        tmp = strlen(sntc[i]);
        min = tmp<strlen(sntc[min])?i:min;
        max = tmp>strlen(sntc[max])?i:max;
    }
    
    printf("其中最长的是：%s\n", sntc[max]);
    printf("其中最短的是：%s\n", sntc[min]);

    return 0;
}