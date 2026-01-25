#include <stdio.h>

int main() {
    // WAP to check if it's monday or if it's raining
    // enter 1 FOR TRUE AND 0 FOR FALSE
    //declaring empty containers
    int isMonday, isRaining;

    // directing user input into isMonday containers
    printf("is it monday, today? 0/1 ");
    scanf("%d", &isMonday);

    // directing user input into isRaining container
    printf("is it raining, today? 0/1 ");
    scanf("%d", &isRaining);

    // using the || --or operator
    // will output true(1) if either isMonday or isRaining is true
    printf("%d", isMonday || isRaining);
    return 0;
}