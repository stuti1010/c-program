#include <stdio.h>
#include <stdlib.h>

//writing my name using string*//

int main()
{
    char mychar[]="stuti singh";
    int i=0;
    while (mychar[i]!= '\0')
    {
     printf("%c\n",mychar[i]);
     i++;
    }
    return 0;
}
