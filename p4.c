#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    printf("enter any number " );
    scanf("%d",&num);
    while(num>0)
    {
        sum+=num%10;
        num/=10;

    }
    printf("sum of digits = %d \n",sum);
    return 0;
}
