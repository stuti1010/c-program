#include <stdio.h>
#include <stdlib.h>

//finding min and max between two number by using passing by reference using pointers*//

int findminmax(int num1,int num2,int *pmax,int *pmin)
{
    if(num1>num2)
       {
        *pmax=num1;
        *pmin=num2;
       }
    else
    {
    *pmin=num1;
    *pmax=num2;
    }
}
void main()
{
    int a=3,b=4;
    int max,min;
    findminmax(a,b,&max,&min);
    printf("maximum between %d and %d is %d\n",a,b,max);
    printf("minimum between %d and %d is %d\n",a,b,min);
    return 0;
}
