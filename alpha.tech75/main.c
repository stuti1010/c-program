#include <stdio.h>
#include <stdlib.h>
#define size 6
//write a program to print whether the given array is a palindrome or not*//

int main()
{
   int arr[size]={1,2,3,3,2,1};
   int i;
   int flag=1;
   for(i=0;i<size/2;i++)
   {
       if (arr[i] != arr[size-1-i])
       {
           flag=0;
           break;
       }
   }
   if(flag==1)
   printf("the array is a palindrome!\n");
   else if(flag==0)
    printf("the array is not a palindrome!\n");

    return 0;
}
