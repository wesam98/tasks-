#include <stdio.h>
#include <stdlib.h>
void min_max (int arr[4]);
int main()
{ int arr[4];
  printf("enter 4 nimbers \n");
  for(int i=0;i<4;i++)
    scanf("%d",&arr[i]);
  min_max(arr);
    return 0;
}
void min_max (int arr[4])
{
    int min=arr[0],max=arr[0];
    for(int i=0;i<4;i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    printf("max is: %d \n",max);
     printf("min is: %d \n",min);
}
