#include <stdio.h> 
// pointer arithematic
//integer case +4/-4 bits 

int main() {
    int score = 89;
    int *ptr = &score;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);

    return 0;
}