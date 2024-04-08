#include <stdio.h>
#include <stdlib.h>

// entering a number using for loop*//
int main()
{
  int num;
  int i;
  printf("hello! enter a number :");
  scanf("%d",&num);
  for (i=0; i<=num; i++)
  {
      printf("%d\n",i);

  }
  return 0;
}
