#include <stdio.h>

int main() {
    // now that seems like a program
    // enter 1 for yes and zero for true

    // declaring empty containers isSunday, isSnowing
    int isSunday, isSnowing;

    // taking user input if it's sunday or not
    printf("is it sunday today? 0/1 ");
    scanf("%d", &isSunday);

    // taking user input if its snowing or not
    printf("is it snowing today? 0/1 ");
    scanf("%d", &isSnowing);

    // will only output true if it's both sunday and snowing
    printf("%d", isSunday && isSnowing);
    return 0;
}