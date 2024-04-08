#include <stdio.h>
#include <stdlib.h>

//printing the sum of values divided by 3 or 5---> trivial solution
int main()
{
   int num;
   int i,sum=0;
   printf("enter the number:");
   scanf("%d",&num);
   printf("trivial solution:\n");
   for(i=1;i<=num;i++)
   {
       if (i%3==0 || i%5==0)
        printf("%d can be divided by both 3 or 5\n",i);
       //sum=sum+1;

   }
   printf("\n optimize solution:\n");
   for(i=3;i<=num;i=i+3)
    sum=sum+i;

       for(i=5;i<=num;i=i+5)
        {
            if(i%3!=0)
           sum=sum+i;
   }

    printf("sum=%d\n",sum);

    return 0;
}
