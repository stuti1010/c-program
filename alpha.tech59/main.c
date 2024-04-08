#include <stdio.h>
#include <stdlib.h>

//finding factorial of a given number using function*//

int factorial(int num)
{
    if(num<0)
    return -1;
    int i,result=1;
    for (i=1;i<=num;i++)
    result=result*i;
    return result;
}
int main()
{
    int mynum;
    printf("enter the number:");
    scanf("%d",&mynum);
    printf("factorial of %d = %d\n",mynum,factorial(mynum));
    return 0;
}
