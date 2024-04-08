#include <stdio.h>
#include <stdlib.h>

// subtracting evendigitsum and odddigitsum  using while loop *//
int main()
{
    int num;
    int currentdigit;
    int evensum=0, oddsum=0;
    printf("enter the number :");
    scanf("%d",&num);
     while(num>0)
     {
        currentdigit=num%10;
         if(currentdigit%2==0)
            evensum+=currentdigit;
         else
            oddsum+=currentdigit;
         num=num/10;
     }
     printf("evendigitsum - odddigitsum =%d\n",evensum-oddsum);
    return 0;
}
