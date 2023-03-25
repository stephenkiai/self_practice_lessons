#include <stdio.h>
/**
 * struct dog-
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} D;
int main(void)
{
    struct dog D;

    D.name = "Poppy";
    D.age = 3.5;
    D.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", D.name, D.age);
    return (0);
}