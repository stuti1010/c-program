#include <stdio.h>
#include <stdlib.h>

//find how many words in string*//

int main()
{
   char sentence[30];
   int countword=0;
   int i;
   printf("please enter a string/text:");
   gets(sentence);
   for (i=0;i<strlen(sentence);i++)
   {
       if(sentence[i]== ' ')
        countword++;
   }
   countword++;
   printf("total amount of words **%s** is %d\n",sentence,countword);
    return 0;
}
