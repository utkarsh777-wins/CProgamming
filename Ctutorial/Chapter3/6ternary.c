// Conditional Operators
// Ternary
#include <stdio.h>

int main() {
    int age;
    printf("enter age ");
    scanf("%d", &age);

    age >= 18 ? printf("Big \n") : printf("Small\n");
    return 0;
}