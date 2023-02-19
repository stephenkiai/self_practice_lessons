#include <stdio.h>
/**
 * 
 * main: shows the use of format specifiers
 * 
 * output formated to .3 decimal places
 * output format to right align
 * 
 * returns 0;
 * 
*/
int main(){

float item1 = 5.546;
float item2 = 10.834;
float item3 = 100.999;
{
printf("item 1: kshs.%6.3f\n", item1);
printf("item 2: kshs.%6.3f\n", item2);
printf("item 3: kshs.%6.3f\n", item3);
}

return 0;
}