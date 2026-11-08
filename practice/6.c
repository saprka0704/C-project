#include <stdio.h>
int main(void)
{
    int price, bill, change;
    int bill_5000, bill_1000, coin_500, coin_100, coin_50, coin_10;

    printf("물건 값을 입력 : \n");
    scanf("%d", &price);
    
    printf("고객이 낸 돈 : \n");
    scanf("%d", &bill);

    change = bill - price;
    bill_5000 = change / 5000;
    bill_1000 = change%5000/1000;
    coin_500 = change%1000/500;
    coin_100 = change%500/100;
    coin_50 = change%100/50;
    coin_10 = change%50/10;

    printf("거스름돈 : %d원\n", change);
    printf("오천원권 : %d장\n", bill_5000 );
    printf("천원권 : %d장\n", bill_1000);
    printf("오백원 동전 : %d개\n", coin_500);
    printf("백원 동전 : %d개\n", coin_100);
    printf("오십원 동전 : %d개\n", coin_50);
    printf("십원 동전 : %d개\n", coin_10);

    return 0;
}