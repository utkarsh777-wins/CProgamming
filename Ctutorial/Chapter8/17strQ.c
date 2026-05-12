#include <stdio.h>
#include <string.h>
#include <ctype.h>

int findCharacter(char str[], char c) {
    for(int i=0; str[i]!='\0'; i++) {
        char temp = tolower(str[i]);
        char cpyC = tolower(c);

        if(temp == cpyC) {
            return 1;
            break;
        }

    } return 0;
}
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';

    char c = 'f';

    if(findCharacter(str, c)!=0) {printf("caught ya!");} else{printf("Lost!!");}
}