#include <stdio.h>
#include <stdlib.h>

int main()
{ int n1 ,n2;
char ope;

    printf("enter an operator ");
    scanf("%c",&ope);
    printf("enter 2 numbers ");
    scanf("%d %d",&n1,&n2);
    switch(ope)
    {
        case '+':
        printf ("%d + %d = %d",n1,n2,n1+n2);
        break;
        case '-':
        printf ("%d - %d = %d",n1,n2,n1-n2);
        break;
        case '*':
        printf ("%d * %d = %d",n1,n2,n1*n2);
        break;
        case '/':
            if(n2 ==0)
                printf("invalid division");
            else
        printf ("%d / %d = %d",n1,n2,n1/n2);
        break;
    }
    return 0;
}
