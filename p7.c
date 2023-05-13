#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,*ptr,even=0,odd=0;
    printf("enter size of array ");
    scanf("%d",&size);
    ptr = (int*)malloc(size * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
    printf("enter elements of array ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
        if(ptr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("total even elements : %d\n",even);
    printf("total odd elements : %d\n
           ",odd);
    return 0;
}}
