#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//finding an absolute value of any input number by using if..else statement*//

int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    if (num<0)
        printf("the absolute value of %d is |%d|\n",num,-1*num);
    else
        printf("the absolute value of %d is %d\n",num,num);
    return 0;

}
