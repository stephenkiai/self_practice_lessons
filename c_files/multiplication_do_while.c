#include <stdio.h>
/**
 * using a do while loop 
 * 
 * 
 * 
 * 
*/
int main()
{
    int i = 1; /*must run since we dont know the condition*/
    do {
        int j = 1; /*start of inner loop*/
        do {
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        }while(j <= 6); /*inner loop end..until this ststement is false then i++ will run*/
        i++; /*inner loop runs again after this one executes*/
        printf("\n");
    }while (i <= 6);/*ends the whole cycle when false*/
    return (0);
}