#include <stdio.h>
#include <stdlib.h>

//finding the factorial of given number up to that number's natural number by using recursion*//

int factorial(int num)
{
    if(num==1)
        return 1;
    return num*factorial(num-1);

}
int main()
{
    int num;
    int result;
    printf("enter the number:");
    scanf("%d",&num);
    result = factorial(num);
    printf("the result =%d\n",result);
    return 0;
}
