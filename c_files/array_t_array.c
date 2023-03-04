#include<stdio.h>
/**
 * read two arrays of size 5
 * do sum and store in another array
 * 
 * return: void.
*/
int main()
{
    int arr1[5];
    int arr2[5];
    int sumarr[5];
    int i;

    printf("Enter arr1 element %d:\n", i+1); //purposely outside loop to show difference
    for(i=0; i<5; i++) //loop to read and save arr1 elements
    {
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<5; i++) ///loop to read and save arr2 elements
    {
        printf("Enter arr2 element %d:\n", i+1); //purposely inside loop to show difference
        scanf("%d", &arr2[i]);
    }
    for(i=0; i<5; i++) //with time i can ommit this repeated loops;now its easier this way
    {
        sumarr[i]=arr1[i]+arr2[i];
        printf("SumArray element at index %d is %d\n", i, sumarr[i]);
    }
}