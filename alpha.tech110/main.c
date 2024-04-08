 #include<stdio.h>
#include<stdlib.h>
#define size 10

///finding maximum index value using counting array///

int main()
{
    int arr[size]={0,5,4,9,5,8,2,3,1,5,4,9,5,5,2,7,6,5,4,1};
    int countarr[10]={0};
    int i,maxindex;
    for(i=0;i<size;i++)
    {
        countarr[arr[i]]++;
    }
    maxindex=0;
    for(i=0;i<size;i++)
    {
        if(countarr[i]>countarr[maxindex])
            maxindex=i;
    }
    printf("the maximum value is %d\n",maxindex);
    return 0;
}
