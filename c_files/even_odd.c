#include<stdio.h>
/**
 * read 10 integers 
 * count total number of even and odd integers
 * 
 * 
 * return: void.
*/
void main()
{
    int even=0;
    int odd=0;
    int a[10];
    int i;

    for(i=0; i<10; i++)
    {
        printf("Type integer %d:", i+1);
        scanf("\n%d", &a[i]);
    //}
    //for(i=0; i<10; i++) //can also comment this out to use above for loop only
    //{
        if(a[i]%2 == 0)
            even=even+1;
        else
            odd=odd+1;
    }
    printf("Even numbers are %d\n", even);
    printf("Odd numbers are %d\n", odd);
}