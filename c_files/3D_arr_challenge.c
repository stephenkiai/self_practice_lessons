#include <stdio.h>
/**
 * create a 3D array that prints
 * the sequence of numbers from 1 to 30
 *
 *so indexes,blocks,rows,columns start count from 0
 */
int main()
{
    int i, j, k;          //declaration of variables to access the index
    int arr[1+1][8-5][5] =      //array declaration and initialization
        {{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}},
         {{16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}}};
         
    printf("\n");           //just a new line for formatting purposes
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                printf("%3d", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }                   //below section we are accessing individual 3D array elements
    printf("The array element at index [0][0][0] is: %d\n", arr[0][0][0]);      //prints 1
    printf("The array element at index [0][2][4] is: %d\n", arr[0][2][4]);      //prints 15
    printf("The array element at index [1][0][1] is: %d\n", arr[1][0][1]);      //prints 17
    printf("The array element at index [1][2][4] is: %d\n\n", arr[1][2][4]);    //prints 30
    return(0);
}