// WAP to calculate area of square (side is given)
#include <stdio.h>

int main() {
    int side;

    printf("Enter the side of square: ");
    scanf("%d", &side);

    // int area = side * side;
    // printf("Area of square = %d", area);

    printf("Area of square = %d", side * side);
    return 0;
}