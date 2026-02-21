#include <stdio.h>

void printAddress(int n);
void _printAddress(int *n);

int main() {
    int n = 4;
    printf("%p\n", &n);
    printf("%u\n", &n);

    printAddress(n);
    _printAddress(&n);

}

// call by value
void printAddress(int n) {
    printf("call by value:\n");
    printf("%p\n", &n);
    printf("%u\n", &n);
}
// call by reference
void _printAddress(int *n) {
    printf("call by reference:\n");
    printf("%p\n", n);
    printf("%u\n", n);
}