#include <stdio.h>
#include <stdlib.h>

// finding maximum between three using function*//

int maxbetween3()
{
   int a,b,c;
   printf("enter the number:");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b)
    if(a>c)
    return a;
   else
    return c;
   else if (b>c)
    return b;
   else
    return c;
}
int main()
{
    int max;
    max=maxbetween3();
    printf("maximum =%d\n",max);
    return 0;
}
