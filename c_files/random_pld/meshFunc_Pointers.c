#include <stdio.h>
//#include <math.h>
int multi(int a, int b);
int div(int a, int b);
int mod(int a, int b);

int main()
{
    int res, res1, res2;
    printf("We are going to calculate multiplication/division and modulus");
    int (*p)(int,int) = &multi;
    int (*v)(int,int) = &div;
    int (*d)(int,int) = &mod;

    res = p(10,3);
    res1 = v(10,2);
    res2 = d(10,2);

    printf("\nmulti = %d\n", res);
    printf("div = %d\n", res1);
    printf("mod = %d\n", res2);
    return (0);
}
int multi(int a, int b)
{
    return  a * b; 
}

int div(int a, int b)
{
    return  a/b;
}

int mod(int a, int b)
{
    return  a%b;
}