#include <stdio.h>

int main() {
    // basic if else
    int number;
    printf("enter your number : ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("positive \n");
    }
    else {
        printf("negative \n");
    }

    return 0;
}