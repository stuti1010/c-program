#include <stdio.h>
#include <stdlib.h>
#define size 5

//write a program to find if an array is really sorted,sorted or not sorted*//

int main()
{
    int arr[size];
    int i;
    int flag=2;
    for (i=0;i<size;i++)
    {
        printf("enter the elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=1;i<size;i++)
     {
         if(arr[i-1]>arr[i])
         {
             flag=0;
             break;
         }
        if (arr[i-1]==arr[i])
        {
            flag =1;
        }
     }

     if(flag == 2)
     printf("the array is really sorted\n");
    else if(flag == 1)
     printf("the array is sorted \n");
      else if(flag == 0)
     printf("the array is not sorted \n");
    return 0;
}
