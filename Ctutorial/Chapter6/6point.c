#include <stdio.h>

int main() {
    int ab = 1234;
    int *ptr = &ab;

    // the value of ptr is the memory location / address of ab
    printf("%p\n", ptr);
    printf("%p\n", &ab);
    printf("%u\n", &ab);
    printf("%u\n", ptr);

    // ptr also has its own memory location / address 
    printf("%p\n", &ptr);
    printf("%u\n", &ptr);

    //printing the values stored at the memory address
    printf("%d\n", ab);
    printf("%d\n", *ptr);
    printf("%d\n", *(&ab));

    return 0;
}