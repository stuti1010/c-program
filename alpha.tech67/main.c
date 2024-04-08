#include <stdio.h>
#include <stdlib.h>
#define size 10

//finding maximum index in array with the use of define#a*//

int main()
{
    int arr[size];
    int i, maxindex;
    for(i=0;i<size;i++)
    {
        printf("enter the number%d :",i+1);
        scanf("%d",&arr[i]);
    }
    maxindex=0;
    for(i=1;i<size;i++)
    {
        if(arr[i]>arr[maxindex])
        maxindex=i;

    }

    printf("maximum index is %d\n",maxindex);
    return 0;
}
