#include <stdio.h>

int main() {

    // if --true
    // else --false
    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    if(age > 18) {
        printf("adult \n");
    }
    else{
        printf("kido go back to you mommy");
    }

    return 0;
}