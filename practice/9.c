#include <stdio.h>
int main(void)
{
    int x;

    printf("정수를 입력 : \n");
    scanf("%d", &x);

    (x%2 == 0)? printf("%d은(는) 짝수\n",x) : printf("%d은(는) 홀수\n",x);

    return 0;
}