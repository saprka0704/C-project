//저축금액이 원금의 10배가 되는데 걸리는 시간 계산하기
#include <stdio.h>
#define SEED_MONEY 1000000 // 기호상수 설정

int main(void)
{
    int year=0, money=SEED_MONEY;
    while(1)//참일때
    {
        year++;
        money += money*0.30; // 30%의 수익을 더해서 금액 계산
        if(money>10*SEED_MONEY)//10배이상이 된다면
            break;//반복문 탈출하기
    }
    printf("%d", year);

    return 0;
}