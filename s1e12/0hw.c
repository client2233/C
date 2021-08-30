#include <stdio.h>

int main (void)
{
    float fir_num, sec_num;
    char ch;

    printf ("请输入式子：");
    scanf ("%f %c %f", &fir_num, &ch, &sec_num);

    switch(ch)
    {
        case '+': printf("结果是：%.2f\n", fir_num + sec_num);break;
        case '-': printf("结果是：%.2f\n", fir_num - sec_num);break;
        case '*': printf("结果是：%.2f\n", fir_num * sec_num);break;
        case '/': printf("结果是：%.2f\n", fir_num / sec_num);break;
    }

    return 0;
}