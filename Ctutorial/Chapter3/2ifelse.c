#include <stdio.h>

int main() {
    int age;
    printf("enter your age here : ");
    scanf("%d", &age);

    if(age > 18) {
        printf("bigg\n");
        printf("can bark\n");
        printf("can ride\n");
    }

    // outside the loop
    // will print in any case
    printf("bye bye");
    return 0;

}