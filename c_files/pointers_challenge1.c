#include <stdio.h>
int main()
{
    int n = 50;
    int *p;
    int *q;
    p = &n;
    q = &*p; 
    {
        printf("The value of variable n is : %d\n", n);
        printf("The address of variable n is : %p\n", &n);
        printf("The value of pointer *p is : %p\n", &n);
        printf("The value of pointer to pointer **q is : %p\n", &p);
        printf("The address of pointer to pointer **q is : %p\n", &q);

    }
}