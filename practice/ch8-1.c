#include <stdio.h>
int max(int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}

int main(void)
{
    int a, b;
    printf("두 정수 a, b를 입력하시오.: \n");
    scanf("%d %d", &a, &b);

    int value = max(a,b);
    printf("최대값은 %d입니다.\n", value);

    return 0;
}