#include <stdio.h>
int main(void)
{
    int sum, num;

    num = 0;
    sum = 0;

    do{
        printf("정수를 입력하시오. \n");
        scanf("%d", &num);
        sum += num;
    }while(num>0);

    printf("정수들의 합은 %d이다. \n", sum);

    return 0;
}