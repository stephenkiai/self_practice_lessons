#include <stdio.h>
#include <string.h>
/**
 * 
 * 
 * 
 * 
*/
int main()
{
    char str[100];
    int i;
    printf("Enter a string :\t");
    //for (i = str[i]; i<0; i++);
    scanf("%s", str);
    
    printf("string entered is :\t");
    printf("%s", str);
    printf("\nAnd string length is :\t%ld", strlen(str));
    //len = strlen(str);

    printf("\nReversed string is:\t");
    
    for (i = strlen(str); i >= 0; i--);
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}