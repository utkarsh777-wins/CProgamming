#include <stdio.h>

int main() {
    // WAP to print the smallest number
    int num1, num2;

    printf("enter your first number: ");
    scanf("%d", &num1);

    printf("enter your second number: ");
    scanf("%d", &num2);

    // scanf("%d %d", &num1, num2);
// using ternary operator 
// condition? if true.. : if false..
    num1 < num2 ? printf("%d", num1) : printf("%d", num2);
    return 0;
}