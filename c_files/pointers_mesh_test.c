#include <stdio.h>
// Discuss the output of the following program :
int main()
{
    int i = 20, j = 30;
    int *p, *q;
    p = &i;
    q = &j;
    *q = *p; // is this dereferencing?    pointer q now stores address of variable i instead of j

    {
        printf("Values held by 'values' of p & q are %d & %d\n", *p, *q); // note the diff of using *p,*q and p,q
        printf("Value of pointers p & q are : %p & %p\n", p, q);          // note values of pointers are addresses
    }
}