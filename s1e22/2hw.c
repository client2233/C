#include <stdio.h>

#define MAX 1024

int main()
{
        char str1[2 * MAX]; // 确保连接后不越界
        char str2[MAX];

        char *target1 = str1;
        char *target2 = str2;

        printf("请输入第一个字符串：");
        fgets(str1, MAX, stdin);

        printf("请输入第二格字符串：");
        fgets(str2, MAX, stdin);

        // 将指针指向 str1 的末尾处
        while (*target1++ != '\0')
                ;

        // 我们希望 str1 最后边的 '\0' 和 '\n' 都被覆盖掉
        target1 -= 2;

        // 连接字符串
        while ((*target1++ = *target2++) != '\0')
                ;

        printf("连接后的结果是：%s", str1);

        return 0;
}