#ifndef PERSON_STRUCT
#define PERSON_STRUCT

#include <stdio.h>
typedef struct Person{
    char name[30];
    unsigned int age;
    unsigned int weight;
    unsigned int height;
} Person;

Person *createPersonal(char name[30], unsigned int age, unsigned int weight, unsigned int height);
void personal_delete(void *per);
void personal_print(void *per);

#endif