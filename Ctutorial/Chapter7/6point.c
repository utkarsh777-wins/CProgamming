#include <stdio.h>

//float case 
int main() {
    float score = 67.9;
    float *ptr = &score;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);

//char case 
    char hash = '#';
    char *ptrrr = &hash;
    printf("%u\n", ptrrr);
    ptrrr++;
    printf("%u\n", ptrrr);
    ptrrr--;
    printf("%u", ptrrr);

    return 0;

}