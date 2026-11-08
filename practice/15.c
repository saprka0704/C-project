#include <stdio.h>
int main(void)
{
    int num, remain;

    printf("정수를 입력하시오.\n");
    scanf("%d", &num);

    remain = num%2;

    switch(remain)
    {
        case 0:
            printf("%d는 짝수입니다.\n",num);
            break;
        case 1:
            printf("%d는 홀수입니다.\n",num);
            break;
    }

    return 0;
}