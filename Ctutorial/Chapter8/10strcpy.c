#include <stdio.h>
#include <string.h>

int main() {

    //manual copying 
    // char str[100];
    // strcpy(str, "utkarsh, it's gonna be an endless peak!");
    // puts(str);

    char oldStr[] = "burglur";
    char newStr[] = "Pieehhha";

    strcpy(newStr, oldStr);

    printf("%s\n", newStr);

}