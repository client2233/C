#include <stdio.h>
#include <string.h>

int main (void)
{
    char ch;
    int i;

    printf ("请输入一行英文句子：");
    ch = getchar();
    while (ch!='\n')
    {
        if (ch>=65&&ch<=90)
            putchar(ch+32);
        else if (ch>=97&&ch<=122)
            putchar(ch-32);
        else
            putchar(ch);
        ch = getchar();
    }

    return 0;
}