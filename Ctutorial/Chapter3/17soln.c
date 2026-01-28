#include <stdio.h>

int main() {
    // solution for 13
    int marks;
    printf("enter your marks : ");
    scanf("%d", &marks);

    if(marks <= 30) {
        printf("FAIL");
    }
    else if(marks > 30 && marks < 100) {
        printf("PASS");
    }
    else {
        printf("INVALID");
    }
}