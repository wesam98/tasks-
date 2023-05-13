#include <stdio.h>
#include <stdlib.h>
int* min_max (int arr[] ,int size );

int main()
{ int n,*ptr;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];
printf("enter elements of array ");
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
ptr=min_max(arr,n);
printf("min is : %d \n",*ptr++);
printf("max is : %d \n",*ptr);

    return 0;
}

int* min_max (int arr[] ,int size )
{
    int res[2];
    res[0]=arr[0];
    res[1]=arr[0];

    for(int i=1;i<size;i++)
    {
        if(arr[i]>res[0])
            res[0]=arr[i];
        if(arr[i]<res[1])
        res[1]=arr[i];

    }
    return *res;

}
