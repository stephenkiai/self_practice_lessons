#include<stdio.h>
/**
 * read marks of 5 studets
 * calculate sum & average using arrays
 * 
 * 
 * return: void.
*/
void main()
{
    float marks[5];
    float sum =0, avg;
    int i;

    for (i = 0; i < 5; i++) //first loop to read and save the array elements
    {
        printf("Enter marks for students %d:", i+1);
        scanf("%f", &marks[i]);
    }
    for (i = 0; i < 5; i++) //loop to calculate the total sum
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("sum=%.3f", sum);
    printf("\navg=%.3f", avg);
}