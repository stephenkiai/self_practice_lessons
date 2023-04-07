#include <stdio.h>
#include <string.h>
/**
 * use of functions that manipulate strings.
 * string is a 1 dimentional array of characters terminated by a null byte (\n)
 * include strcpy,strcat,strlen,
 * 
*/
void main()
{
    char str1[10] = "Stephen";
    char str2[10] = "Wamoni";
    char str3[10] = "Kiai";
    char str4[20];

    printf("My names are : %s\n", strcat(str1, str2));  //comment out this line to see diff
    strcpy(str4,str1);
    printf("My first name is : %s\n", str4);
    printf("The length of name is : %ld\n", strlen(str4));
}