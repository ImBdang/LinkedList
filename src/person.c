#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

Person *createPersonal(char name[30], unsigned int age, unsigned int weight, unsigned int height){
    Person *person = malloc(sizeof(Person));
    strncpy(person->name, name, sizeof(person->name));
    person->age = age;
    person->weight = weight;
    person->height = height;
    return person;
}

void personal_delete(void *per){
    free((Person *)per);
}

void personal_print(void *per){
    Person *person = (Person *)per;
    printf("\n\n\n=====================================\n");
    printf("HO TEN: %s\n", person->name);
    printf("TUOI: %u\n", person->age);
    printf("CHIEU CAO: %ucm\n", person->height);
    printf("CAN NANG: %ukg\n", person->weight);
    printf("=====================================\n");
}