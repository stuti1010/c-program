#include <stdio.h>
#include <stdlib.h>

//calculating & return average between 3 grades*//

float findaverage(int grade1,int grade2, int grade3)
{
    float avg;
    avg=(grade1+grade2+grade3)/3.0;
    return avg;

}
int main()
{
    int g1,g2,g3;
    printf("enter the grades :");
    scanf("%d%d%d",&g1,&g2,&g3);
    printf("average=%.2f\n",findaverage(g1,g2,g3));
    return 0;

}
