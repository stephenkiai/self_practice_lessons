#include <stdio.h>
int main()
{
    int a = 10;     //variables a,b,c,x declared and initialized
    int b = 6;
    int c = 8;
    int x = 11;
    printf("values before manipulation\n");
    printf("a value is :%d\n", a);  //values before manipulation
    printf("x value is :%d\n", x);
    printf("b value is :%d\n", b);
    printf("c value is :%d\n", c);

    a = x++;
    b = ++x;
    c += 1;
    printf("\nvalues after post and pre increment\n");
    printf("a value is :%d\n", a);  //values after post and pre increment 
    printf("x value is :%d\n", x);
    printf("b value is :%d\n", b);
    printf("c value is :%d\n", c);

    return 0;
}