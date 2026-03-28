#include <stdio.h>

int main() {
    int marks[2][3];
    marks[0][0] = 77;
    marks[0][1] = 88;
    marks[0][2] = 99;
    marks[1][0] = 71;
    marks[1][1] = 89;
    marks[1][2] = 99;

    printf("%d", marks[1][2]);

    return 0;
}