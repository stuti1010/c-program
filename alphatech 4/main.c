#include<stdio.h>
#include<stdlib.h>
 int main()

 {
    double length ,breadth ;
    double perimeter;
    printf("enter length ");
    scanf("%lf",&length);
    printf("enter breadth");
    scanf("%lf",&breadth);
    perimeter= 2*(length+breadth);
    printf("perimeter of rectangle = %lf\n",perimeter);
    return 0;

 }
