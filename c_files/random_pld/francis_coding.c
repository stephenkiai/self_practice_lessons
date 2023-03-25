#include <stdio.h>
int main()
{
        int n, num = 0;
        printf("Enter number to print in words: "); // this program is meant to accept one digit number only
        scanf("%d", &n);
        while (n != 0) 
        {
                num = (num * 10) + (n % 10);
                n /= 10;
                printf("number in words: ");
        }
        while (num != 0)
        {
                switch (num % 10)
                {
                case 0:
                        printf("number is : zero");
                        break;
                case 1:
                        printf("number is : one");
                        break;
                case 2:
                        printf("number is : two");
                        break;
                case 3:
                        printf("number is : three");
                        break;
                case 4:
                        printf("number is : four");
                        break;
                case 5:
                        printf("five");
                        break;
                case 6:
                        printf("six");
                        break;
                case 7:
                        printf("seven");
                        break;
                case 8:
                        printf("eight");
                        break;
                case 9:
                        printf("nine");
                        break;
                case 11:
                        printf("eleven");
                        break;
                }
                num = num / 10; // if i comment out - goes into a infinite loop
        }
        printf("\n");
        return (0);
}