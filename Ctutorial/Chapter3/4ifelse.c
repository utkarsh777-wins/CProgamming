#include <stdio.h>

int main() {
    int age;
    printf("enter your age here : ");
    scanf("%d", &age);

    // in case of single statement if else can work even without the curly braces
    if(age > 18)
        printf("stubborn & dumb\n");
        // printf("they are gay");
    else
        printf("curious\n");
}