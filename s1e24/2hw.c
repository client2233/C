#include <stdio.h>
#include <string.h>

int main()
{
    char *array[5] = {"FishC", "Five", "Star", "Good", "Wow"};
    char *(*p)[5] = &array;
    int i, j;

    for (i = 0; i<5; i++)
    {
        for (j = 0; j<5 ; j++)
        {
            if (i>strlen((*p)[j])-1)
                break;
            printf("%c ", (*p)[j][i]);
        }
        printf("\n");
    }

    return 0;
}