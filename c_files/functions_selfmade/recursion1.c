#include <stdio.h>
/**
 * 
 * 
 * 
*/
int sum(int x);

void main()
{
    int a;
    a = sum(5);     //calling function sum and passing 5 as an argument to x in the sum function definition
    printf("%d\n", a);
}

int sum(int x)
{
    int s = 0;
    if (x == 1)
    {
        return x;
    }
    else
    s = x + sum(x-1);
    return s;
}