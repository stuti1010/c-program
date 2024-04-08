#include<stdio.h>
#include<stdlib.h>

///printing the date using structure(struct) in C//


typedef struct date{
int day;
int month;
int year;
}date;

void printdate(date dt)
{
  printf("day =%d\n month =%d\n year =%d\n",dt.day,dt.month,dt.year);
}

date inputdate()
{
    date dt;
    printf("enter the day:");
    scanf("%d",&dt.day);
    printf("enter the month:");
    scanf("%d",&dt.month);
    printf("enter the year:");
    scanf("%d",&dt.year);
    return dt;
}
int main()
{
    date todaydate;
    todaydate=inputdate();
    printdate(todaydate);
    return 0;

}
