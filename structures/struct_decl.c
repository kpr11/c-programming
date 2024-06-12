#include <stdio.h>

struct employee 
{
    char name[20];
    int age;
    int height;
};

int main ()
{
    struct employee e1;
    strcpy(e1.name,"Rajesh");
    printf("Name of the employee:%s",e1.name);
    printf("age of the employee is:%d",e1.age = 24);
    printf("height of the employee:%d",e1.height);
    return 0;
}