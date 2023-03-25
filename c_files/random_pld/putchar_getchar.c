#include <stdio.h>

void main( )
{
    int c;
    printf("Enter a character");
    /*
        Take a character as input and 
        store it in variable c
    */
    c = getchar();
    /*
        display the character stored 
        in variable c 
    */
    putchar(c);
    printf("\n");
}