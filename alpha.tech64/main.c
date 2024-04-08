#include <stdio.h>
#include <stdlib.h>

// calculating the amount & average of digit less than given digit*//

float lowerThanDigit(int num, int digit)
{
    int counter =0;
    int sum=0;
    if (num<0)
        num=num* (-1);

        while(num!=0)
        {
           if (num %10 <digit)
                counter++;
                sum+=num%10;
        }
        num= num/10;
        printf("total amount of digit in %d is less than %d\n",num,counter);
        return (float)sum/counter;
}

int main()
{
    int num,digit;
    int average;
    printf("enter the num:");
    scanf("%d",&num);
    printf("enter the digit:");
    scanf("%d",&digit);
    average=lowerThanDigit(num,digit);
    printf("the result is %d\n",average);
    return 0;
}
