#include<stdio.h>
#include<stdlib.h>
#define size 8

///counting numbers with the help of counting array//

int main()
{
    int arr[size]={0,5,4,2,1,3,2,0};
    int countarr[6]={0};
    int i;
    for(i=0;i<size;i++)
    {
        countarr[arr[i]]++;
    }
    printf("the count values of 0 are %d\n",countarr[0]);
    printf("the count values of 1 are %d\n",countarr[1]);
    printf("the count values of 2 are %d\n",countarr[2]);
    printf("the count values of 3 are %d\n",countarr[3]);
    printf("the count values of 4 are %d\n",countarr[4]);
    printf("the count values of 5 are %d\n",countarr[5]);

    return 0;
}
