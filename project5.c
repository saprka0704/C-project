#include <stdio.h>
int main(void)
{
    int price;
    int bill;
    int change;
    int paper_5000;
    int paper_1000;
    int coin_500;
    int coin_100;
    int coin_50;
    int coin_10;

    printf("Enter the total bill amount: \n");
    scanf("%d", &price);
    printf("Enter the bill customer has paid: \n");
    scanf("%d", &bill);

    change = bill - price;
    paper_5000 = change / 5000;
    paper_1000 = change%5000/1000;
    coin_500 = change%1000/500;
    coin_100 = change%500/100;
    coin_50 = change%100/50;
    coin_10 = change%50/10;

    printf("The total change is %d won \n", change);
    printf("5000 won bills : %d\n", paper_5000);
    printf("1000 won bills : %d\n", paper_1000);
    printf("500 won coins : %d\n", coin_500);
    printf("100 won coins : %d\n", coin_100);
    printf("50 won coins : %d\n", coin_50);
    printf("10 won coins : %d\n", coin_10);
    return 0;
}
