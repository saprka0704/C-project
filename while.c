#include <stdio.h>
int main(void)
{
    int i, n, sum;

    i=0;
    sum=0;
    
    while(i<5)
    {
        printf("값을 입력하시오: \n");
        scanf("%d", &n);
        sum += n;
        i++;
    }

    printf("The sum is %d", sum);

    return 0;

}