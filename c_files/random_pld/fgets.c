#include <stdio.h>
#define MAX 10
int main()
{
    char str[MAX];
    fgets(str, MAX, stdin);
    printf("The string is: %s\n", str);
    return 0;
}