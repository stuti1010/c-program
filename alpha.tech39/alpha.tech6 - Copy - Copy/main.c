#include <stdio.h>
#include <stdlib.h>

int main()
{
     double ftemp, ctemp;
    printf("Enter degrees in fahrenheit: ");
    scanf("%lf", &ftemp);
    ctemp = (ftemp-32)/1.8;
    printf("Conversion of %.2lf fahrenheit degrees is %.2lf celsius Degrees\n", ftemp, ctemp);
    return 0;

}
