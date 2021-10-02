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
            i++;
        ch = getchar();
    }

    printf ("你总共输入了%d个大写字母！\n", i);

    return 0;
}