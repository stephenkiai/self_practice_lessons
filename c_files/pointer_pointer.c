#include <stdio.h>
int main()
{
    int a = 30;
    int *x;
    {
        x=&a;
        {
            printf("The address of variable a is : %p\n", x);
            printf("The value of variable a is : %d\n", *x);
        }
    }
}