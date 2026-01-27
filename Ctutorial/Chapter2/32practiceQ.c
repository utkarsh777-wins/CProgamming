#include <stdio.h>

int main() {
    // WAP to print the avg of three numbers
    // declaring empty containers
    int x, y, z;

    // filling empty container x with scanf fn
    printf("Enter Number1 ");
    scanf("%d", &x);

    // filling empty container y 
    printf("Enter Number2 ");
    scanf("%d", &y);

    // filling empty container z
    printf("Enter Number3 ");
    scanf("%d", &z);

    // avg of three numbers 
    // sum of three numbers devided by 3 will output the average of those numbeers
    printf("The average = %d", (x + y + z) / 3);


    return 0;
}