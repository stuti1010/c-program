#include <stdio.h>
#include <stdlib.h>

//print max between two integer*//

void printmaxmin(int num1,int num2)
{
   if(num1>num2)
   {
       printf("maximum is %d\n",num1);
       printf("minimum is %d\n",num2);
   }
       else
       {
        printf("maximum is %d\n",num2);
        printf("minimum is %d\n",num1);
       }
}
int main()
{
    int a,b;
    printf("enter number 1:");
    scanf("%d",&a);
    printf("enter number 2:");
    scanf("%d",&b);
    printmaxmin(a,b);
    return 0;

}


