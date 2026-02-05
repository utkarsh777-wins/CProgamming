#include <stdio.h>

float areaSquare(float side);
float areaCircle(float radius);
float areaRectangle(float length, float width);
int main() {
    // float side, radius, length, width;
    // printf("enter the values side, radius, length, width: ");
    // scanf("%f %f %f %f", &side, &radius, &length, &width);
    float width = 5.0;
    float length = 10.0;

    // float a = areaCircle(radius);
    float b = areaRectangle(length, width);
    // float c = areaSquare(side);
}

float areaSquare(float side) {
    printf("%f\n", side * side);
}

float areaCircle(float radius) {
    printf("%f\n", 3.14 * radius * radius);
}

float areaRectangle(float length, float width) {
    printf("%f\n", length * width);
}