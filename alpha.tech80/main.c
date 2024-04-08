#include <stdio.h>
#include <stdlib.h>

//function to calculate the sum of any array*//

int sumOfArray( int *parr,int size)
{
    int i;
    int sum =0;
    for(i=0;i<size;i++)
    {
        sum=sum+parr[i];
    }
    return sum;
}

int main()
{
    int arr[3]={1,5,10};
    int result=0;
    result=sumOfArray(arr,3);
    printf("the result sum=%d\n",result);
    return 0;

}
