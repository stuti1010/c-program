#include <stdio.h>
#include <stdlib.h>

//initializing & printing the date variable using structures in C*//

struct point{
int x;
int y;
};

int main()
{
   struct point p1;
   printf("enter the X coordinate:");
   scanf("%d",&p1.x);
   printf("enter the Y coordinate:");
   scanf("%d",&p1.y);
   printf("the point is (%d %d) \n",p1.x,p1.y);
   return 0;

}
