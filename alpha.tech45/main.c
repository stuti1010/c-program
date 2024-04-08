#include <stdio.h>
#include <stdlib.h>

//printing the sum of all number from 1 to num*//

int main()
{
    int num;
    int i,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=0; i<=num; i++)
        sum=sum+i;
        printf("the sum of all number from 1 to %d is %d\n",num,sum);

    return 0;
}
