#include <stdio.h>
#include <stdlib.h>

//finding the month name by month number(1 to 12) by using switch-case statement*//

int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("JANUARY\n");
        break;
    case 2:
        printf("FEBUARY\n");
        break;
    case 3:
        printf("MARCH\n");
        break;
    case 4:
        printf("APRIL\n");
        break;
    case 5:
        printf("MAY\n");
        break;
        case 6:
        printf("JUNE\n");
        break;
        case 7:
            printf("JULY\n");
            break;
        case 8:
            printf("AUGUST\n");
                break;
        case 9:
            printf("SEPTEMBER\n");
                break;
        case 10:
            printf("OCTOBER\n");
            break;
        case 11:
            printf("NOVEMBER\n");
            break;
        case 12:
            printf("DECEMBER\n");
                break;
        default:
            printf("ERROR\n");
            break;
    }

    return 0;
}
