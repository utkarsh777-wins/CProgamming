#include <stdio.h>

int main() {
    // print the sum of first n natural numbers
    // user input
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    // storage
    int sum = 0;

    // iterator
    int i = 1;
    do {
        printf("%d\n", sum += i);
        i++; //updation
    } while(i <= n); //stopping condition

    return 0;
}