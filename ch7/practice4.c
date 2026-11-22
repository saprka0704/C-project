/*사용자로부터 알파벳 소문자를 받아서 대문자로 바꾸는 다음의 프로그램을 살펴보자.*/
#include<stdio.h>

int main(void)
{
    char x;

    while(1)
    {
        printf("소문자를 입력하시오.\n");
        scanf("%c", &x);

        if(x=='Q')
            break;
        if(x<'a'||x>'z')
            continue;

        x -= 32;
        printf("변환된 대문자는 %c입니다.\n", x);
    }
   
    return 0;

}