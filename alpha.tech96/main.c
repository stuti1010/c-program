#include <stdio.h>
#include <stdlib.h>

//initialize and printing date variable using structure*//

struct date{
int day;
int month;
int year;
};
int main()
{
    struct date dateofbirth;
    printf("enter the day:");
    scanf("%d",&dateofbirth.day);
    printf("enter the month:");
    scanf("%d",&dateofbirth.month);
    printf("enter the year:");
    scanf("%d",&dateofbirth.year);

    printf("the date of birth is %d/%d/%d \n",dateofbirth.day,dateofbirth.month,dateofbirth.year);
    return 0;
}
