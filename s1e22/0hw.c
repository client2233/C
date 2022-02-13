#include <stdio.h>

#define MAX 1024

int main(void)
{
    char str[MAX];
    char *p = str;
    int cnt = 0;

    printf("请输入一个字符串：");
    fgets(p, MAX, stdin);

    while(*p++!='\n')
        cnt++;

    printf("您总共输入了%d个字符",cnt);

    return 0;
}