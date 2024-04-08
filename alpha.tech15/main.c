#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2;
    float distance;
    printf("enter the value of x1 :");
    scanf("%f",&x1);
    printf(" enter the value of y1 :");
    scanf("%f",&y1);
    printf("enter the value of x2 :");
    scanf("%f",&x2);
    printf("enter the value of y2 :");
    scanf("%f",&y2);
    distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("the distance between these points (%.2f,%.2f) and (%.2f,%.2f) is %.2f",x1,y1,x2,y2,distance);
    return 0;

}
