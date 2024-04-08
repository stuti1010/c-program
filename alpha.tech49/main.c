#include <stdio.h>
#include <stdlib.h>

//printing sum of values divided by 3 and 5 --->trivial and optimized solution //

int main()
{
   int num;
   int i,sum=0;
   printf("enter the number:");
   scanf("%d",&num);
   printf("trivial solution\n");
   for(i=1;i<=num;i++)
   {
       if(i%3==0 && i%5==0){
        printf("%d can be divided by both 3 and 5\n",i);
       //sum=sum+i;
       }
   }

       printf("\n optimize solution\n");
       for(i=15;i<=num;i=i+15){
        printf("%d can be divided by both 3 and 5\n",i);
        sum=sum+i;
       }

   printf("sum =%d\n",sum);
    return 0;
}
