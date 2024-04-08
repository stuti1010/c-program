#include <stdio.h>
#include <stdlib.h>

//finding the number is even or odd using function*//

int isEven(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;

}

int isOdd(int num)
{
    if(num%2!=0)
        return 1;
    else
        return 0;

}
int main()
{
    int num;
    int result1,result2;
    printf("enter the number:");
    scanf("%d",&num);
    result1=isEven(num);
    result2=isOdd(num);
    printf("the result1(even) is %d\n",result1);
    printf("the result2(odd)is %d\n",result2);

    return 0;
}
