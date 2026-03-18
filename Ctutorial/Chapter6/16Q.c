// a-z
#include <stdio.h>

void alphaR(char *pI, char *pF);

int main() {
    char i = 'A';
    char f = 'Z';

    alphaR(&i, &f);
}

 void alphaR(char *pI, char *pF) {
    char i = *pI; char f = *pF;
    do {
        printf(" %c", i);
        i++;
    } while(i<=f);
}