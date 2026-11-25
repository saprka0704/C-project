#include <stdio.h>

void printmenu()//printfmenu라는 함수 만들기. 
{
    printf("==============================\n");
    printf(" 'c' 섭씨온도에서 화씨온도로 변환\n");
    printf(" 'f' 화씨온도에서 섭씨온도로 변환\n");
    printf(" 'q' 종료\n");
    printf("===============================\n");
}

double C2F(double c_temp)//섭씨온도를 화씨온도로 변환해주는 함수 만들기
{
    return 9.0/5.0*c_temp +32;
}

double F2C(double f_temp)//화씨온도를 섭씨온도로 변환해주는 함수 만들기
{
    return (f_temp-32.0)*5.0/9.0;
}

int main(void)
{
    char choice;
    double temp;
    while (1)//참일 동안
    {
        printmenu(); // printfmenu함수 호출
        printf("메뉴를 선택하세요: ");
        scanf(" %c", &choice);
        if (choice == 'q') break; // q를 입력시 반복문 탈출
        else if (choice == 'c')
        {
            printf("섭씨온도: ");
            scanf("%lf", &temp);
            printf("화씨온도: %lf \n",C2F(temp));
        }
        else if(choice == 'f')
        {
            printf("화씨온도: ");
            scanf("%lf", &temp);
            printf("섭씨온도 : %lf \n", F2C(temp));
        }
        //getchar(); //엔터키 문자를 삭제하기 위하여 필요. -> 왜??? ___학습 필요___
    }
    return 0;
}