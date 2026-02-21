#include <stdio.h>

int main() {
    int z = 26;
    int *ptr = &z;

    printf("%d\n", z);
    printf("%d\n", *ptr);
    printf("%d\n", *(&z));

    return 0;
}