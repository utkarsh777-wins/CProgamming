#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    //an array of structures 
    struct student ece[100];
    ece[0].roll = 1332;
    ece[0].cgpa = 9.2;
    strcpy(ece[0].name, "npc1");

    printf("%s\n", ece[0].name);
    printf("%d\n", ece[0].roll);
    printf("%.2f\n", ece[0].cgpa);

    ece[1].roll = 1442;
}