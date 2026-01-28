#include <stdio.h>

// ternary is very intersting
// although it is for simple condtions
// plus point is that it's shorterthan if-else
int main() {
    int marks;
    printf("enter your marks : ");
    scanf("%d", &marks);

    marks >= 30 ? printf("PASS \n") : printf("FAIL \n");
    return 0;
}