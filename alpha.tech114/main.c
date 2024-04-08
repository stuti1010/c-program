#include <stdio.h>
#include <stdlib.h>

///file creating ///

int main()
{
    FILE *fp;
    fp=fopen("myfirstfile.txt","w");
    if(fp==NULL)
    {
        printf("the opening of file is failed\n");
    }
    else
    {
        printf("the file has opened to read\n");
    }
    fclose(fp);
    return 0;
}
