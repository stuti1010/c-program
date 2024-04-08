#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grade;
   int totalsum =0 , gradecount =0;

   printf("please enter your grade or -1 to stop");
   scanf("%d",&grade);

   while (grade!=-1)
   {

    totalsum = totalsum+grade;
    gradecount++;
    printf("please enter your grade or -1 to stop");
   scanf("%d",&grade);
   }
   printf("you entered %d grade",gradecount);
   printf("your average grade is %f\n",(float)totalsum/gradecount);
    return 0;
}
