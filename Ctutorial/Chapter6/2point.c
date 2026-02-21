#include <stdio.h>
int main() {
    int year = 2005;
    int *ptr = &year;

    // varibale address
    printf("%p \n", &year);

    return 0;
}