#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,year;
    char name[20];

    printf("Enter your name ");
    scanf("%s",&name);
    printf("Enter your birth year ");
    scanf("%d",&year);

    age=2025-year;

    printf("Hello %s, your now %d years old",name,age);
    return 0;
}
