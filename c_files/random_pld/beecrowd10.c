#include <stdio.h>
/**The code first declares a struct product which contains three fields: 
 *code, nunits, and price. It then creates an array s of two product structs.
 *The code then uses a for loop to read in the code, number of units, and price 
 *for each product using the scanf function.
 *Next, the code uses another for loop to calculate the total value of the two products.
 *It does this by multiplying the number of units by the price for each product and 
 *adding them together. The result is stored in the variable value.
 */
int main() 
{
    typedef struct product{
        int code;
        int nunits;
        float price;
    } prod;
     
    prod s[2];
    int i;
    float value = 0;

    for (i = 0; i < 2; i++) {
        scanf("%d %d %f", &s[i].code, &s[i].nunits, &s[i].price);
    }

    printf("product 0 code = %d\n", s[0].code);
    printf("product 1 code = %d\n", s[1].code);

    for (i = 0; i < 2; i++) {
        value += (s[i].nunits * s[i].price);
    }

    printf("VALOR A PAGAR: R$ %.2f\n", value);

    return 0;
}
