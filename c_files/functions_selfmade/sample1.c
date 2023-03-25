#include <stdio.h>
/**
 * 
 * 
 * 
 * 
 * 
*/
void sum();     //function declation
void main()
{
    sum();      //function calling
}

void sum()      //function definition
{
    int a,b,sum;
    printf("Enter two numbers :\n");
    scanf("%d\n %d", &a,&b);
    sum = a+b;
    printf("sum = %d\n", sum);
}