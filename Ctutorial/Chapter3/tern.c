#include <stdio.h>

int main() {

    int a = 5, b = 7;
    int max = (a > b) ? a : b;
    printf("%d\n", max);

    int hours = 13;
    int minutes = 45;
    char *meridiem = (hours > 12) ? "PM" : "AM";
    printf("%02d:%02d %s\n", hours, minutes, meridiem);

    return 0;
    
}