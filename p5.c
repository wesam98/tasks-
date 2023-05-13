#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ int num,power;
    printf("enter number : ");
    scanf("%d",&num);
    printf("enter power : ");
    scanf("%d",&power);
   double res=pow(num,power);
    printf("Answer: %.2f", res);

    return 0;
}
