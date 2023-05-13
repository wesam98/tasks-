#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ long long n;
    printf("enter your number : ");
    scanf("%lld",&n);
    int i=0,rem,dec=0;
    while(n>0)
    {
        rem=n%10;
        dec+=rem*pow(2,i);
        n=n/10;
        i++;

    }
    printf("number in decimal is %d : ",dec);
    return 0;
}
