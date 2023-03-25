#include <stdio.h>
#include <stdarg.h>

//function prototype or include in a header file then import
int add(int args, ...);

//main function
int main()
{
    printf("Addition 1 = %d\n",add(7, 20, 30, 10, 22, 33, 60, 70));     //first number 7 represents total number of arguments
    printf("Addition 2 = %d\n", add(4, 20, 30, 10, 33));
    printf("Addition 3 = %d\n", add(2, 20, 30));
    return 0;
}

//add function which is a variadic function
int add(int args, ...)
{
    va_list list;       //which is a macro definition

    va_start(list, args);
    //all actions will take place here
    int i, sum = 0;     //i is for iteration in loop

    for (i = 0; i < args; i++)  //args is max number of arguments we intend to pass
    {
        sum += va_arg(list, int);   //what will happen for every iteration of i

    }

    va_end(list);

    return sum;     //returning to the main function
}