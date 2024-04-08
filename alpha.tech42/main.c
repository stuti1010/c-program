#include <stdio.h>
#include <stdlib.h>

// printing another type of right angled pattern using nested loop*//

int main()
{
   int n;
   int i, j;
   printf("enter the number :");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    j=i;
    while (j>0)
        {
            printf("%d", i);
             j--;
        }
        printf(" \n");
   }
   return 0;
}
