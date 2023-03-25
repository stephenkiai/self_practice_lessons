#include <stdio.h>

int main()
{
    /* character array of length 100 */
    char str[100];
    printf("Enter a string: ");
    gets(str);
    puts(str);
    getch();
    return 0;
}