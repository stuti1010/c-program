#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//finding the given number is divisible or not by using if ...else statement and logical operator*//

  int main()

  {
      int a,b,c;
      printf("enter the numbers :");
      scanf("%d%d%d",&a,&b,&c);

      if (a==0 ||b==0 || c==0)
        printf("error check your input!");
      if ((a%b==0 || b%a==0)&&(b%c==0 || c%b==0)&& (a%c==0 || c%a==0))
        printf("divisible numbers!\n");
      else
        printf("not divisible numbers!\n");
      return 0;
  }
