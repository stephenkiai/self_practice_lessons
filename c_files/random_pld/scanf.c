#include <stdio.h>
int main()
{
    int a;
    printf("please type an integer value\t:");
    scanf("%d", &a);

    float b;
    printf("please type a decimal number\t:");
    scanf("%f", &b);

    char c;
    printf("please type a single character\t:");
    scanf("%s", &c);

    /*char d[20];
    printf("please type a string of characters\n:");
    scanf("%s", &d);*/

    printf("You typed integer value\n:%d", a);
    printf("You typed decimal value\n:%f", b);
    printf("You typed single character\n:%c", c);
    //printf("You entered character string\t:%s", d);

    printf("The size of a is:%d \n", sizeof(a));
    printf("The size of b is\n:%d", sizeof(b));
    printf("The size of c is\n:%d", sizeof(c));
    //printf("The size of d is\t:%ld", sizeof(d));
return (0);
}