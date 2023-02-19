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
float item4 = 20.863;  
float item5 = 34.237;
float item6 = 678.456;
{
printf("item 1: kshs.%6.3f\n", item1);
printf("item 2: kshs.%6.3f\n", item2);
printf("item 3: kshs.%6.3f\n", item3);
printf("item 4: kshs.%f\n", item4); /*no format to 6-to right align and .3 decimal points*/
printf("item 5: kshs.%f\n", item5); /*same case*/
printf("item 6: kshs.%f\n", item6); /*same case*/
}

return 0;
}