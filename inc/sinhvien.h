#ifndef SINHVIEN_STRUCT
#define SINHVIEN_STRUCT

#include <stdio.h>
typedef struct SinhVien{
    char name[30];
    char id[15];
    unsigned int age;
    float gpa;
} SinhVien;

SinhVien *createSinhVien(char id[15], char name[30], unsigned int age, float gpa);
void sinhvien_delete(void *sinhvien);
void sinhvien_print(void *sinhvien);

#endif