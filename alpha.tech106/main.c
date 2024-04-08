#include<stdio.h>
#include<stdlib.h>

///union//

 struct struct_point{
 int x;
 int y;
 }struct_point;
 union union_point{
 int x;
 int y;
 }union_point;

 int main()
 {
     struct struct_point point1;
    union  union_point  point2;
     point1.x=5;
     point1.y=6;
     point1.y+=2;
     printf("struct point=(%d,%d)\n",point1.x,point1.y);
     point2.x=4;
     point2.x+=3;
     printf("union point=(%d,%d)\n",point2.x,point2.y);
     return 0;
 }
