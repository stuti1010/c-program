#include <stdio.h>
#include <stdlib.h>

// finding maximum index in array*//

int main()
{
    int arr[10];
    int i,maxindex;
    for(i=0; i<10;i++)
    {
        printf("enter the number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    maxindex=0;
    for(i=1;i<10;i++)
    {
        if (arr[i]>arr[maxindex])
            maxindex=i;

    }
    printf("index of max digit is %d\n",maxindex);
    return 0;
}
