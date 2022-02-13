#include <stdio.h>

#define MAX 1024

int main()
{
    char str[MAX];
    int  i = 0, j = 0;
    int count = 0;

    scanf ("%s", str);

    str[9] = '\0';

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%c ", str[j+i*3]);
        }
        printf("\n");
    }

    return 0;
}