#include <stdio.h>
#include <stdlib.h>
#define size 10

// finding the array values in reverse order*//

int main()
{
    int i;
    int pushups[size];
    for(i=0;i<size;i++)
    {
        printf("enter the number of pushups%d :",i+1);
        scanf("%d",&pushups[i]);

    }
    for(i=9;i>=0;i--)
    {
        printf("%d day you did number of pushups =%d\n",10-i-1,pushups[i]);
    }
    return 0;
}
