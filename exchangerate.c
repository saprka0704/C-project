#include <stdio.h>

int main(void)
{ 
    double rate;
    double usd;
    int krw;
    
    printf("Enter the exchange rate: \n");
    scanf("%lf", &rate);

    printf("Enter the amount in KRW: \n");
    scanf("%d", &krw);

    usd = krw / rate;

    printf("The amount in USD: %lf$", usd);    
    return 0;
}
