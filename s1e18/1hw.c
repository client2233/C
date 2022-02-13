#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 1024

int main()
{
    char str[MAX];
    int  i = 0, j = 0;
    int count = 0;

    scanf ("%s", str);
    
    count = (int)sqrt((double)strlen(str));
    str[count*count] = '\0';
    

    for(i=0; i<count; i++)
    {
        for(j=0; j<count; j++)
        {
            printf("%c ", str[j+i*count]);
        }
        printf("\n");
    }

    return 0;
}