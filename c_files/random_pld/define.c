#include <stdio.h>
/**
 * just showing the use of c directive #define.main diff btwn it and typedef is
 * typedef is used to alias datatypes only
*/
#define true 1
#define false 0

void main()
{
    printf("The value of true is : %d\n", true);
    printf("The value of false is: %d\n", false);
}