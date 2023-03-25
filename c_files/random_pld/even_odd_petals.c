#include <stdio.h>
#include <stdlib.h>
/**
 * Timmy & Sarah think they are in love, 
 * but around where they live, they will only know 
 * once they pick a flower each. If one of the flowers 
 * has an even number of petals and the other has an odd 
 * number of petals it means they are in love.Write 
 * a function that will take the number of 
 * petals of each flower and return 
 * true if they are in love 
 * and false if they aren't.
 * even_odd_petals- is a function that checks whether number of petals are even or odd 
 * @x: number of petals in flower one
 * @y: number of petals in flower two
 * @n: number of flowers
 * return: true if they are in love else false
*/
int even_odd_petals(int x,int y)
 {
        
        if (x%2 == 0 && y%2 == 1)
        {
            return (1);
        }
        else
        {
            return (0);
        }
 }

int main()
{
    int a, b;
    int res;
    printf("We are going to find out whether Timmy & Sarah are in Love!\n");
    
    printf("Enter number of petals for flower 1:\t");
    scanf("%d", &a);
    printf("\nEnter number of petals for flower 2:\t");
    scanf("%d", &b);
       
    res = even_odd_petals(a,b);
    printf("Are timmy & Sarah in love? : %d\n", res);
    printf("\n1 stands for TRUE & 0 stands for FALSE\n");
   
}