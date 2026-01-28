#include <stdio.h>

int main() {
    int number;
    printf("enter your number ");
    scanf("%d", &number);

    if(number > 0) {
        printf("positive \n");
        if(number % 2 == 0) {
            printf("even \n");
        } else {        //notice the else 
            printf("odd \n");
        }
    } else {        //another way to write if else
        printf("negative \n");
    }
    return 0;
}