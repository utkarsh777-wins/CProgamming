#include <stdio.h>

int main() {
    float price = 11.1;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("%f", **pptr);

    return 0;
}