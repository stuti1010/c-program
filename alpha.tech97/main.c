#include<stdio.h>
#include<stdlib.h>

//input a point and print a point*//
typedef struct point{...}point;

void printpoint(point p1)
{
    printf("point x=%d\n",p1.x);
    printf("point y=%d\n",p1.y);
}
point inputpoint()
{
    int mypoint;
    printf("enter the x-coordinate:");
    scanf("%d",&mypoint.x);
    printf("enter the y-coordinate:");
    scanf("%d",&mypoint.y);
    return mypoint;

}
int main()
{
    Point p1=inputpoint;
    printf("P1 before changes:");
    printpoint(p1);
    p1.x += 1;
    p1.y -= 3;
    printf("P1 after changes:");
    printpoint(p1);
    return 0;

}
