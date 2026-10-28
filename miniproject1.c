#include<stdio.h>
int main(void)
{
    int TOTAL_MONEY, TAX_RATE, BEFORE_DEDUCTION, DEDUCTION, TOTAL_TAX;

    printf("과세표준 금액을 입력하시오. \n");
    scanf("%d" ,&TOTAL_MONEY);

    if(TOTAL_MONEY>=12000000&& TOTAL_MONEY<46000000)
    {
        TAX_RATE = 15;
        DEDUCTION = 1080000;
    }
    else if(TOTAL_MONEY>=46000000 && TOTAL_MONEY<= 88000000)
    {
        TAX_RATE = 24;
        DEDUCTION = 5220000;        
    }
    else if(TOTAL_MONEY>= 88000000 && TOTAL_MONEY<15000000)
    {
        TAX_RATE = 35;
        DEDUCTION = 14900000;
    }
    else
    {
        TAX_RATE = 0;
        DEDUCTION = 0;
    }

    BEFORE_DEDUCTION = TOTAL_MONEY*TAX_RATE/100;
    TOTAL_TAX = BEFORE_DEDUCTION - DEDUCTION;

    printf("과세 표준 : %d\n", TOTAL_MONEY);
    printf("소득세율 : %d\n", TAX_RATE);
    printf("(공제전)소득세 : %d\n", BEFORE_DEDUCTION);
    printf("누진 공제액 : %d\n", DEDUCTION);
    printf("산출세액 : %d\n",TOTAL_TAX);
   
    return 0;
}