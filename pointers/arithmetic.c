#include <stdio.h>

typedef struct
{
    char name[64];
    int age;
} Person;

int main(int argc, char *argv[])
{
    Person people[100];

    Person *p_Person = &people;

    int i = 0;
    for (i = 0; i < 100; i++)
    {
        p_Person->age = 0;
        p_Person += 1;
    }
    
    return 0;
}