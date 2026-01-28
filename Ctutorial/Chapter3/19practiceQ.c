#include <stdio.h>

int main() {
    // WAP to give grades to a student
    // marks < 30 is C
    // 30 <= marks < 70 is B
    // 70 <= marks < 90 is A
    // 90 <= marks <= 100 is A+
    int marks;
    printf("enter your marks : ");
    scanf("%d", &marks);

    if(marks <= 30 && marks < 70) {
        printf("C \n");
    }
    else if(marks >= 70 && marks <90) {
        printf("A \n");
    }
    else if(marks >=  90 && marks < 100) {
        printf("A+ \n");
    }
    else {
        printf("INVALID");
    }
}