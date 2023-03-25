#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n*sizeof(int)); //malloc typecasting to int and allocating required block of space
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
    }
    else
    printf("Enter values: \t");
    for (i=0; i<n; i++) //loop to iterate through the elements to store the entered values
    {
        scanf("%d", (ptr+i));
    }
    printf("The number of elements entered are:\n");
    for (i=0; i<n; i++) //loop to iterate through the stored values
    {
        printf("%d\t", *(ptr+i)); //indirectional pointer to access the value stored in that address
    }
    free(ptr);
}