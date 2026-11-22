#include <stdio.h>

int add(int x, int y)
{
    return x+y;
}

int main(void)
{
    int x, y, sum;
    printf("두 정수를 입력하시오.\n");
    scanf("%d %d", &x, &y);

    sum = add(x,y);

    printf("두 정수의 합은 %d입니다.\n", sum);
    return 0;
}