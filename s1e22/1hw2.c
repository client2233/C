#include <stdio.h>

#define MAX 1024

int main()
{
        char str1[MAX];
        char str2[MAX];

        char *target1 = str1;
        char *target2 = str2;

        char ch;
        int n;

        printf("请输入一个字符串到 str1 中：");
        fgets(str1, MAX, stdin);

        printf("请输入需要拷贝的字符个数：");
        scanf("%d", &n);

        printf("开始拷贝 str1 的内容到 str2 中...\n");
        while (n--)
        {
               ch = *target2++ = *target1++;
               if (ch == '\0')
               {
                       break;
               }
               if ((int)ch < 0)
               {
                       *target2++ = *target1++;
                       *target2++ = *target1++;
               }
        }

        *target2 = '\0';

        printf("拷贝完毕！\n");
        printf("现在，str2 中的内容是：%s\n", str2);

        return 0;
}