#include <stdio.h>
#include <stdlib.h>

///structs having array as data member(and copying struct variable//

typedef struct employee{
char name[10];
float age;
int id;
}employee;

int main()
{
    employee emp1;
    employee emp2={"jake",22.5,123};
    emp1=emp2;
    //printf("employee #1 name is %s\n",emp1.name);
    //printf("employee #2 name is %s\n",emp2.name);
    strcpy(emp1.name,"john");
    emp1.id=456;
    printf("employee #1 name is %s\n",emp1.name);
    printf("employee #2 name is %s\n",emp2.name);
    printf("employee #1 ID is %d\n",emp1.id);
    printf("employee #2 ID is %d\n",emp2.id);
    return 0;
}
