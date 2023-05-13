#include <stdio.h>
#include <stdlib.h>

int main()
{ int year;
    printf("enter any year ");
    scanf("%d",&year);
    if((year %4==0 && year %100!=0) || year %400==0 )
        printf("Leap Year \n");
        else
            printf("Not Leap \n");

    return 0;
}
