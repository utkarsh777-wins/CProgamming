// WAP TO STORE THE DATA OF THREE STUDENTS
#include <stdio.h>

struct student {
    char *name;
    int roll;
    float cgpa;
};

int main() {
    struct student s1;
    s1.name = "shadow";
    s1.roll = 1000;
    s1.cgpa = 7.6;

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %.2f\n", s1.cgpa);

    struct student s2;
    s2.name = "hope";
    s2.roll = 1233;
    s2.cgpa = 8.88;

    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("strudentn cgpa = %.2f\n", s2.cgpa);

    struct student s3;
    s3.name = "weaver";
    s3.roll = 1;
    s3.cgpa =  9.11;
    
    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %.2f\n", s3.cgpa);

    return 0;
}