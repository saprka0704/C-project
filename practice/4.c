#include <stdio.h>
int main(void)
{
    int x;

    printf("10진수를 입력하시오, \n");
    scanf("%d", &x);

    printf("10진수 %d의 8진수는 %08o\n", x,x); // %_ _ _ -> 첫번째 빈칸 : 빈 자리 무엇으로 채울지, 두번째 빈칸 : 폭 , 세번재 빈칸 : 형식 
    printf("10진수 %d의 16진수는 %#08X",x,x);

    return 0;
}