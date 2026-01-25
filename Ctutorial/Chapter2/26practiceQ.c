#include <stdio.h>

int main() {
    // WAP to check if the number is even or odd
    // 0 => odd
    // 1 => even

    // var9able declaration
    int num;

    // taking user input
    printf("Enter Your Number: ");
    scanf("%d", &num);

    // output logic
    printf("%d", num % 2 == 0);

    return 0;
}