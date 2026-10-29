#include <stdio.h>
int main(void)
{
    int month;
    printf("출생한지 몇 개월이 경과되었습니까?: \n");
    scanf("%d", &month);

    if(month<=1)
        {
            printf("결핵 \nB형 간염");
        }
    else if(month>=1 && month<=2)
        { 
            printf("B형간염 \n파상풍 \n폐렴구균");
        }
    else if(month>=2 && month<=6)
        {
            printf("파상풍 \n폐렴구균");
        }
    else
        {
            printf("폐렴구균");
        }

    return 0;        
}