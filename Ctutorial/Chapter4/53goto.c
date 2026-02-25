#include <stdio.h>

int main() {
    int num = 4;

    // if(num < 10) {goto small;}
    // printf("It's not small");
    
    // small:
    // printf("It's actually big");


    // return 0;
    if(num < 10) {
        goto small;
    }
    
    printf("It's not small\n");
    goto end; // Jump over the 'small' section so it doesn't print both

    small:
    printf("It's actually big\n");

    end:
    return 0;
}