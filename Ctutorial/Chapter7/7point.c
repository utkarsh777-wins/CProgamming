#include <stdio.h>

int main() {
    int exe1 = 11;
    int exe2 = 22;
    int *ptr = &exe1;
    int *ptrr = &exe2;

    printf("difference = %u\n", ptr-ptrr);
    ptrr = &exe1;
    printf("comparison = %u\n", ptr==ptrr);

    return 0;
}