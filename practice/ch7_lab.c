/* 알고리즘
반감기 계산 -> 10%이하 될때까지의 시간 계산
100% -> 50& -> 25% -> 12.5% -> (6.25%)
현재 > 시작 * 0.1


*/
#include <stdio.h>
int main(void)
{
    int halftime;
    float initial, current;
    int years = 0;

    initial = 100.0;
    current = initial;

    printf("반감기를 입력하시오.\n");
    scanf("%d", &halftime);

    while (current>initial*0.1)
    {
        years += halftime;
        current = 0.5*current;
        printf("%d년 후 물질의 양은 %f이다. \n",years, current);
    }

    printf("물질의 양이 초기의 1/10 이하가 되는데 걸리는 시간은 %d년이다.\n", years);
    
    return 0;
}