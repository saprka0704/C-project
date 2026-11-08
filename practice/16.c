#include <stdio.h>
int main(void)
{
    int menu;

    printf("메뉴를 입력하시오.\n");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
            printf("짜파구리\n");
            break;
        case 2:
            printf("카구리\n");
            break;
        case 3:
            printf("불닭게티\n");
            break;
        case 4:
            printf("공화뽕\n");
            break;
        default:
            printf("치즈게티");
            break;
    }
    return 0;
}