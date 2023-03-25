#include <stdio.h>
/**
 * 
 * 
 * 
 * 
*/
char fun(); //function declaration-aka gprototype
void main()
{
    char ch;
    ch=fun();       //function calling-compiler runs fuction definition and returns
    printf("ch = %c\n", ch);
}

char fun()      //function definition-what it does
{
    char c;
    printf("Enter a character :\n");
    scanf("%c", &c);

    return(c);
}