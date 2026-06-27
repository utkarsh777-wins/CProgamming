#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age) {

    if(age >= 18) {
        return true;
    }

    return false;
}

int main() {

    int age = 17;

    //if true
    if(ageCheck(age)) {
        printf("You may signup^^\n");
    } else {
        printf("You must be 18+ to sign up!!\n");
    }


    return 0;
}