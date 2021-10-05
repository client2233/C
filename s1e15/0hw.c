#include <stdio.h>

int main(void)
{
    char ch;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf ("请输入一个英文句子：");

    while ((ch=getchar())!='\n')
    {
        switch (ch)
        {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
            case 'A': a++; break;
            case 'E': e++; break;
            case 'I': i++; break;
            case 'O': o++; break;
            case 'U': u++; break;
        }
    }

    printf("您输入的句子中，包含元音字母5个！\n");
    printf ("其中：a(%d), e(%d), i(%d), o(%d), u(%d)\n", a, e, i, o, u);

    return 0;
}