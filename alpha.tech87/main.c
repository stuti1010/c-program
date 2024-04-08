#include <stdio.h>
#include <stdlib.h>

//write a recursive function to print fibonacci series*//

int fibonacci(int num)
{
    if(num==0)
        return 0;
    if(num==1)
        return ;
    return fibonacci(num-1)+fibonacci(num-2);
}
int main()
{
    int num;
    int result;
    printf("enter the number:");
    scanf("%d",&num);
    result= fibonacci(num);
    printf("the result is %d\n",result);
    return 0;


}
