#include <stdio.h>
#include <stdlib.h>

//printing a right angled triangle by using nested loop*//

int main()
{
    int i,j;
   int n;
   printf("enter the number :");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
        printf("%d",j);
       printf("\n");

   }
   return 0;
}
