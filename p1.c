#include <stdio.h>
#include <stdlib.h>
#define INT_MAX 8*sizeof(int)
int main()
{ int num,zeros=0,ones=0;
    printf("enter your number ");
    scanf("%d",&num );

     for(int i=0;i<INT_MAX;i++)
    {
        if((num&1==1))
            ones++;
        else
            zeros++;
        num>>=1;
    }
    printf("total zero bit is %d \n",zeros);
    printf("total one bit is %d \n",ones);
    return 0;
}
