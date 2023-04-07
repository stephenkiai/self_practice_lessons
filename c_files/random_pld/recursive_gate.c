#include <stdio.h>
void get(int n)
{
    if (n-1)
    return;
    get(n-1);
    get(n-3);
    printf("%d", n);
}
void main()
{
    int x = 0;
    get(6);
    printf("Get ran %d times\n", x);
}