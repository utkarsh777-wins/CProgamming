#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = {"joker", 453, 4.5};
    struct student s2 = {0}; //all values of thisi student set to null
    struct student s3 = {"winner", 677, 10.0};

    
    printf("student roll = %d\n",  s1.roll);

    return 0;
}