#include <stdio.h>

int max_value(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main(void)
{
    int x, y, max;
    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    max = max_value(x,y);

    printf("더 큰 값은 %d입니다.",max);
    
    return 0;
}