#include <stdio.h>
#include <stdlib.h>

//to find the sum of 1 up to  given number using recursions*//

int sumUpTo(int num)
{
    if(num==1)
        return 1;
    return num+ sumUpTo(num-1);
}
int main()
{
     int num;
     int result;
     printf("enter any integer:");
     scanf("%d",&num);
     result =sumUpTo(num);
     printf("result is %d\n",result);
    return 0;
}
