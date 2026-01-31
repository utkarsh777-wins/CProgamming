#include <stdio.h>
int main() {
    int val = 2026;
    int *ptr = &val;

    printf("---Compiiiieeeeleeer Health Check--- \n");
    printf("Success! GCC is recignised. \n");
    printf("Value: %d\n", val);
    printf("Pointer Address: %p\n", (void*)ptr);
    printf("-------------------------------------/");

    return 0;

}