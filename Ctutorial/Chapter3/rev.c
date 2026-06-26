#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    bool isStudent = false;

    // if(isStudent == true) {printf("You are a student?\n");}
    if(isStudent) {printf("You are a student?\n");}
    else {printf("Not a student huh?\n");}

    char name[50] = "";
    printf("Enter you name: ");
    fgets(name, sizeof(name), stdin);

    // adding null terminator at the end of the string to avoid newlines 
    name[strlen(name) - 1] = '\0';

    printf("\n");

    if(strlen(name) == 0) {
        printf("You did not enter your name!");
    } else {printf("What's the agenda, today? %s", name);}

    return 0;
}