#include <stdio.h>
#include <stdlib.h>

//finding the sum of digits by using recursions//

int sumOfDigits(int num)
{
    if(num<=9)
        return num;
    return num%10+sumOfDigits(num/10);

}
int main()
{
    int num;
    int result;
    printf("enter the number:");
    scanf("%d",&num);
    result = sumOfDigits(num);
    printf("the result is %d\n",result);
      return 0;
}
