#include <stdio.h>
#include <string.h>

int main (void)
{/*
    char str[]  = "I love FishC.com!";

    printf ("sizeof str = %d\n", sizeof(str));
    printf ("strlen str = %u\n", strlen(str));
*/

    char str1[] = "Original String";
    char str2[] = "New String";
    char str3[100];

    strcpy(str1, str2);
    strcpy(str3, "Copy Successfully");

    printf ("str1: %s\n", str1);
    printf ("str2: %s\n", str2);
    printf ("str3: %s\n", str3);

    return 0;
}
