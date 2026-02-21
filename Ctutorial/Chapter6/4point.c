#include <stdio.h>
int main() {
    int realm = 501;
    int *ptr = &realm;

    // address in hexadecimal format(pointer address)
    printf("%p\n", &realm);
    printf("%p\n", ptr);

    // address type coersion in unsigned int
    printf("%u\n", &realm);
    printf("%u\n", ptr);
    return 0;
}