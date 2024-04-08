#include <stdio.h>
#include <stdlib.h>

///initializing and printing point using struct in C///

typedef struct point{
int x;
int y;
}point;

void printpoint(point p1)
{
    printf("point x=%d\n",p1.x);
    printf("point y=%d\n",p1.y);
}

point inputpoint()
{
    point mypoint;
    printf("enter the x coordinate:");
    scanf("%d",&mypoint.x);
    printf("enter the y coordinate:");
    scanf("%d",&mypoint.y);
    return mypoint;
}
int main()
{
    point p1=inputpoint();
    printf("P1 before changes\n");
    printpoint(p1);
    p1.x+=1;
    p1.y+=3;
    printf("P1 after changes\n");
    printpoint(p1);
    return 0;
}
