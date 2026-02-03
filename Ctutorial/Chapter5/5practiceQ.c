#include <stdio.h>

void isMale();
void isFemale();

int main() {
    char c;
    printf("enter your gender m/f: ");
    scanf(" %c", &c);

    if(c == 'm') {
       isMale();
    }
    else if(c == 'f') {
        isFemale();
    }
    else {
        printf("GAY");
    }
}

void isMale() {
    printf("WELCOME! Great sir! \n");
}

void isFemale() {
    printf("WELCOME! Mademoiselle \n");
}


