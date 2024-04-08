#include <stdio.h>
#include <stdlib.h>

//*creating a mark sheet program by using else if ..ladder statement*//

int main()
{
    int p,e,h,m,c,total;
    float per;
    printf("enter the number of physics :");
    scanf("%d",&p);
    printf("enter the number of english :");
    scanf("%d",&e);
    printf("enter the number of hindi :");
    scanf("%d",&h);
    printf("enter the number of maths :");
    scanf("%d",&m);
    printf("enter the number of chemistry :");
    scanf("%d",&c);
    total = p+e+h+m+c;
    per = total/5;
    if (per>=80)
    {
    printf("A+ ,excellent job!");
    }
    else if (per>=60)
    {
        printf("A ,good job!");
    }
    else if (per>=50)
    {
        printf(" B+ ,well try!");

    }
    else if (per>=40)
    {
        printf("B ,not enough");

    }
    else
    {
    printf(" fail");

    }
    return 0;
}
