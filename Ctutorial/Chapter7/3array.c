#include <stdio.h>

int main() {
    int marks[3];

    printf("Enter Phy: ");
    scanf("%d", &marks[0]);

    printf("Enter Maths: ");
    scanf("%d", &marks[1]);

    printf("Enter Clang: ");
    scanf("%d", &marks[2]);

    printf("your scores in the respective subjects: %d, %d, %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    //hmm peculiar

    return 0;
}