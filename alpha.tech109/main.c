#include<stdio.h>
#include<stdlib.h>
#define size 8

///counting numbers with the help of counting array//

int main()
{
    int arr[size]={7,5,6,9,6,7,10,7};
    int countarr[6]={0};
    int i;
    for(i=0;i<size;i++)
    {
        countarr[arr[i]-5]++;
    }
    printf("the count values of 5 are %d\n",countarr[0]);
    printf("the count values of 6 are %d\n",countarr[1]);
    printf("the count values of 7 are %d\n",countarr[2]);
    printf("the count values of 8 are %d\n",countarr[3]);
    printf("the count values of 9 are %d\n",countarr[4]);
    printf("the count values of 10 are %d\n",countarr[5]);

    return 0;
}
