// Take a number(n) from user & output its cube
#include <stdio.h>

int main() {
    // taking user input in 
    float n; 
    printf("enter your number: ");
    // scanf is the c labrary used to take user input
    scanf("%f", &n);

    // printing the cube of that number
    printf("cube of that number is = %f", n * n * n);
    return 0;
}
