#include <stdio.h>
int main(void)
{
    int menu;
    printf("메뉴를 입력하세요: \n");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
            printf("짜파구리");
            break;
        case 2:
            printf("카구리");
            break;
        case 3:
            printf("불닭게티");
            break;
        case 4:
            printf("공화뽕");
            break;
        default :
            printf("치즈게티");
            break; 
    }

    return 0;

}