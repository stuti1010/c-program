#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    do
    {
   printf("enter the grade between 0 to 100 :");
   scanf("%d",&grade);
    }
   while (grade<0 || grade>100);

   printf(" Thanks! you've entered a legit grade of %d\n",grade);


    return 0;
}
