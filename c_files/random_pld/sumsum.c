#include <stdio.h>
//#include <math.h>

int sum(int a,int b);

int main()
{
    int i, j, k;
    //int sum = 0;
    printf("Enter first numbers:");
    scanf("%d", &i);
    printf("\nEnter second number:");
    scanf("%d", &j);
    k = sum(i,j);
    printf("sum = %d\n", k);
    return (0);
}

int sum(int a,int b)
{
    int s;
    s = a + b;
    //return s;
}