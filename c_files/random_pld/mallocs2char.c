#include <stdio.h>
#include <stdlib.h>

int main()                          //this program not done
{
    char *p;
    int i, j, n;
    printf("Enter number of students:\t");
    scanf("%d", &n);

    p = (char *)malloc(sizeof(char) * n);

    for (j = 1; j < n; j++)
    {
        printf("Enter surname of student %d:", j);
        for (i = 0; i < n; i++)
        {
            
            scanf("%s", (p + i));
        }
    }
    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            printf("Surname of student %d is: %s", j, *(p + i));
        }
    }
    free(p);
}