#include <stdio.h>
#include <math.h>
int sqArea();

int main()
{
    printf("We are going to calculate area of a square");
    int area = sqArea();
}

int sqArea()
{
    int a; //b;
    printf("\nEnter one side(in meters) of square: ");
    scanf("%d", &a);
    //printf("Enter height of square: ");
    //scanf("%d", &b);
    printf("Area = %d\n", a*a);
    return (0);
}