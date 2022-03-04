#include <stdio.h>
#include <math.h>

float price (int percent, float price);

int main(void){

    int percent;
    printf("Please enter the percent off ");
    scanf("%i", &percent);

    float regPrice;
    printf("Please enter the regular price ");
    scanf("%f",&regPrice);


    float pr = price(percent, regPrice);
    printf ("The new price is %f \n",pr);


    return 0;

}

float price(int percent, float pricer){

    float percentval = percent/100.0;
    float priceOff = pricer*percentval;
    //printf("%f",percentval);
    float newprice = pricer - priceOff;

    return newprice; 
    
}