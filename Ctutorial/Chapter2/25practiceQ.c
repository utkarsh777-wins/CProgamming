#include <stdio.h>

int main() {
    // WAP to check if a number is divisible by 2 or not
    //declaring the variable
    int a; 
    
    // taking user input
    printf("Enter Your number: ");
    scanf("%d", &a);

    // 0/1 as result. Since == is a comparison operator
    // 0 --false, 1 --true
    printf("%d", a % 2 == 0);
    return 0;
}