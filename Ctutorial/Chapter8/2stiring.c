#include <stdio.h>
//manual way    

char printStr(char x) {
    for(int i=0; i<(sizeof(x)-1); i++) {
        // printf("%c", x[i]);  //what? can we not access them through indexing?
    }
}

void printString(char x[]) {
    //loop until null character
    for(int i=0; x[i]!='\0'; i++) {
        printf("%c", x[i]);
    }
    printf("\n");
}

int main() {
    char firstName[] = {'U', 'T', 'K', '\0'};
    char lasName[] = "JHA";

    printString(firstName);
    printString(lasName);

    return 0;
}