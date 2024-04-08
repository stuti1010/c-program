#include <stdio.h>
#include <stdlib.h>

// finding the maximum digit from our phone number using array*//

main()
{

 int arr[10]={9,3,4,0,6,7,3,1,5,3};
 int i, max;
  max=arr[0];
   for (i=1; i<10;i++)
   {
       if (arr[i]>max)
        max= arr[i];
   }
   printf("max digit in your phone number is %d\n",max);

    return 0;

}
