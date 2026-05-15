#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct Student s1;
    s1.roll = 1251;
    s1.cgpa = 9.99;
    //char array, value can't be reinitiallized. Hence, we copy the new str in the existing one 
    strcpy(s1.name, "utkarsh");

    printf("Student name = %s\n", s1.name);
    printf("Student roll = %d\n", s1.roll);
    printf("Student cgpa = %.2f\n", s1.cgpa);

    return 0;
}