#include <stdio.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main() {
    struct student s1 = {"utkarsh", 43, 7.63};
}

void printInfo(struct student s1) {
    
}