#include <stdio.h>
#include <stdlib.h>

// finding a maximum in given two digit number*//

void maxdigit( int num)
{
   if(num>99 || num<10)
    printf("the number is not the double-digit number\n");
   else
   {
       if (num%10> num/10)
        printf(" maximum digit in %d is %d\n",num,num%10);
        else
        printf("maximum digit in %d is %d\n",num,num/10);
   }
}
int main()
{
    maxdigit(98);
    return 0;

}
