#include <stdio.h>

void isMale();
void isFemale();

int main() {
    char imp;
    printf("enter your gender m/f: " );
    scanf(" %c", &imp);

    if(imp == 'm' | imp =='M') {
        isMale();
    }
    else if(imp == 'f' | imp == 'F') {
        isFemale();
    }
    else {
        printf("GAY");
    }

    return 0;
}

void isMale() {
    printf("WELCOME GREAT SIR!!");
}

void isFemale() {
    printf("WELCOME, MADEMOISELLE!");
}