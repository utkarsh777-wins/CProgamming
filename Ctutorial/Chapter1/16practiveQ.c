// WAP to calculate perimeter of rectangle.Side a & b from the user.
#include <stdio.h>

int main() {
    // taking user input a
    float a;
    printf("enter side a: ");
    scanf("%f", &a); //second value specifies variable address to save the value

    // taking user input b
    float b;
    printf("enter side b: ");
    scanf("%f", &b); //first value specifies input type

    // printing the perimeter
    printf("Perimeter of rectangle = %f", (a + b) * 2 );
    return 0;
}

