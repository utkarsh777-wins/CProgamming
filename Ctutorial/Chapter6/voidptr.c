#include <stdio.h>

int main() {
    
    int bill=699;
    float price=29.9;
    char symbol = '$';

    // void *ptr;


    // ptr = &bill;
    // // type conversion
    // printf("Bill amount = %d", *(int*)ptr);

    // ptr = &symbol;
    // printf("\nSymbol = %c", *(char*)ptr);

    void *ptr = NULL;

    // ptr = &bill;

    printf("%d\n", *(int*)ptr);

    // ptr = &price;

    // printf("%.1f\n", *(float*)ptr);

    // ptr = 
    return 0;
}