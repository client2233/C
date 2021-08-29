#include <stdio.h>

int main(void)
{
    char letter;

    printf ("请输入一个英文字母：");
    scanf ("%c", &letter);

    if (letter>=65&&letter<=90)
        {
            printf ("转换后为%c\n", letter+32);
        }
    else if (letter>=97&&letter<=122)
        {
            printf ("转换后为%c\n", letter-32);
        }
    else
        {
            printf ("error!!!\n");
        }

    return 0;
}