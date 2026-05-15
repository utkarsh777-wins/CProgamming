#include <stdio.h>

struct student {
    char *name;
    int roll;
    float cgpa;
};
int main() {
    struct student s1 = {"unknown", 111, 7.8};
    struct student *ptr = &s1;

    printf("(*ptr).code\n");
    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).roll);
    printf("%.1f\n", (*ptr).cgpa);

    printf("ptr->code\n");
    printf("%s\n", ptr->name);
    printf("%d\n", ptr->roll);
    printf("%.1f\n",ptr->cgpa);

    return 0;
}