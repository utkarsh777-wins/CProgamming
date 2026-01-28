#include <stdio.h>

int main() {
    int age;
    printf("enter you age here : ");
    scanf("%d", &age);

    if(age > 18) {
        printf("dumb \n");
        printf("they can bark\n");
        printf("they can ride\n");
    }
    else {
        printf("small kido");
    }

    printf("hola amigo!");
    return 0;
}