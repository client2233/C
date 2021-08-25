#include <stdio.h>

int main (void)
{
    char name[256];
    float height, weight;

    printf ("请输入您的姓名：");
    scanf ("%s", name);
    printf ("请输入您的身高：");
    scanf ("%f", &height);
    printf ("请输入您的体重：");
    scanf ("%f", &weight);

    height = height/2.54;
    weight = weight/0.453;

    printf("%s的身高是%.2f(in)，体重是%.2f(lb)。\n", name, height, weight);

    return 0;
}