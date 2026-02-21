#include <stdio.h>

int main() {
    int ab = 1234;
    int *ptr = &ab;

    // the value of ptr is the memory location / address of ab
    printf("%p\n", ptr);
    printf("%p\n", &ab);
    printf("%u\n", &ab);
    printf("%u\n", ptr);


    // pointer variable also has a memory address, different from the address of ab
    printf("%p\n", &ptr);
    printf("%u\n", &ptr);

    return 0;
}