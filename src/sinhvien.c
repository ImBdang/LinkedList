#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sinhvien.h"

SinhVien *createSinhVien(char id[15], char name[30], unsigned int age, float gpa){
    SinhVien *sv = malloc(sizeof(SinhVien));
    strncpy(sv->id, id, sizeof(sv->id));
    strncpy(sv->name, name, sizeof(sv->name));
    sv->age = age;
    sv->gpa = gpa;
    return sv;
}

void sinhvien_delete(void *sinhvien){
    free((SinhVien *)sinhvien);
}

void sinhvien_print(void *sinhvien){
    SinhVien *sv = (SinhVien *)sinhvien;
    printf("\n\n\n=====================================\n");
    printf("ID: %s\n", sv->id);
    printf("HO TEN: %s\n", sv->name);
    printf("TUOI: %u\n", sv->age);
    printf("GPA: %.2f\n", sv->gpa);
    printf("=====================================\n");
}