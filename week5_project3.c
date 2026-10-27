#include <stdio.h>
int main(void)
{
    int x;

    printf("Enter a decimal number : \n");
    scanf("%d", &x);
    
    printf("The octal value of  %d is : %08o\n",x, x); // 8진수로 표현하려면 형식지정자 %o 활용. 폭을 8자리로, 빈칸은 0을 입력하기 위해 %08o
    printf("The hexadecimal value of %d is : %#08X\n",x,x); // 16진수로 표현하려면 형식지정자 %x 활용. 대문자로 출력하려면 %X. 폭이 8자리, 빈칸은 0을 입력하며, 앞에 두번째 자리 X를 출력하기 위해서 #을 추가 -> %#08X

    return 0;
    

}