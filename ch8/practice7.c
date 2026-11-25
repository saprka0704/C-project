// lab: 동전 던지기 게임 - 동전 던져서 앞면 나오는 횟수와 뒷면 나오는 횟수 구하기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void);

int main(void)
{
    int toss;
    int heads = 0;
    int tails = 0;

    for(toss=1; toss<=100; toss++)
    {
        if (coin_toss()==1)
            heads++;
        else
            tails++;
    }

    printf("동전의 앞면 : %d \n",heads);
    printf("동전의 뒷면 : %d \n",tails);

    return 0;
}

int coin_toss(void)
{
    int head = rand()%2;
    return head;
}