#include <stdio.h>

int main() {
    char ch;
    printf("enter your character here : ");
    scanf("%d", &ch);

    // ch = 97 & ch = 'a' are the same 
    // since the ASCII value of these characters are predefined
    if(ch >= 'A' && ch <= 'Z') {
        printf("Upper Case");
    }
    else {
        printf("Lower Case");
    }


    return 0;
}