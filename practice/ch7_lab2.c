#include <stdio.h>
int main(void)
{
    int i=2;
    double money = 1.0;

    while(i>=2 && i<=30)
    {
        money *= 2;
        printf("%d일 금액: %f.\n", i, money);
        i++;
    }

    return 0;
}