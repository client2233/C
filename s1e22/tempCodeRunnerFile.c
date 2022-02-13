#include <stdio.h>

int main()
{
        char str[] = "中";
        int length, i;

        length = sizeof(str) / sizeof(str[0]);

        printf("length of str: %d\n", length);

        for (i = 0; i < length; i++)
        {
                printf("str[%d] = %d\n", i, str[i]);
        }

        return 0;
}