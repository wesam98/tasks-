#include <stdio.h>
#include <stdlib.h>

int main()
{ char s1[100],s2[100] ;
int i;
    printf("enter your string ");
    scanf("%s",&s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf(" string s2 is %s \n" ,s2);
    return 0;
}
