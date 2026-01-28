#include <stdio.h>

int main() {
    int number;
    printf("enter your number : ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("positive \n");
        if(number % 2 == 0) {   //nest
            printf("even \n");
        }
        else {
            printf("odd \n");
        }
    }
    else {
        printf("negative \n");
    }
    return 0;
}