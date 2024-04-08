#include <stdio.h>
#include <stdlib.h>

//finding to count of digits by using recursions*//

int countOfDigits(int num)
{
    if(num<=9)
        return 1;
    return 1+countOfDigits(num/10);
}
int main()
{
    int num;
    int result;
    printf("enter the number:");
    scanf("%d",&num);
    result =countOfDigits(num);
    printf("the result is %d\n",result);
    return 0;
}
