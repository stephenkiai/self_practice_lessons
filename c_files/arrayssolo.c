#include <stdio.h>
#include <string.h>
/**
 * 
 * 
 * 
 * 
*/
void main()
{
    int a[5], i;
    {
        
        printf("Enter array elements(type integers only:\n");
        for(i=0; i<5; i++)
        {
            scanf("%d\n", &a[i]);
        }
        for(i=0; i<5; i++)
        {
            printf("Array element at index %d is %d\n", i,a[i]);
        }
        

        for(i=5; i>=0; i--) //for loop to print in reverse
        {
            printf("reversed array elements at index %d is %d\n", i,a[i]);
        }

    }
    
}