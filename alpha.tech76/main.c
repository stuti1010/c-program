#include <stdio.h>
#include <stdlib.h>
#define size 5
//write a program that should calculate and print the largest sum of two adjacent elements in array*//

int main()
{
    int arr[size]={1,4,3,7,1};
    int i;
    int maxsum=arr[0]+arr[1];
    for(i=0;i<size-1;i++)
    {
       if(maxsum<arr[i]+arr[i+1])
        maxsum=arr[i]+arr[i+1];
    }
    printf("maximum sum of two neighbours = %d\n",maxsum);
    return 0;
}
