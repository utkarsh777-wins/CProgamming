#include <stdio.h>
#include <math.h>
#include <string.h>

// global scope constant 
const double PI = 3.14159265359;

double circleArea(double r) {
    return PI * pow(r, 2);
}

double sphereSurfaceArea(double r) {
    return 4 * PI * pow(r, 2);
}

double sphereVolume(double r) {
    return 4/3 * (PI * pow(r, 3));
}

int main() {
    double radius  = 0;
    double area = 0;
    double surfaceArea = 0;
    double volume = 0;
    char unit[4];

    printf("enter the unit for calculation (m/cm): ");
    fgets(unit, sizeof(unit), stdin);
    unit[strlen(unit) - 1] = '\0';

    printf("enter the radius of your circle: ");
    scanf("%lf", &radius);

    area = circleArea(radius);
    printf("Area of the circle = %lf%s\n", area, unit);

    surfaceArea = sphereSurfaceArea(radius);
    printf("Surface area of the sphere = %lf%s\n", surfaceArea, unit);

    volume = sphereVolume(radius);
    printf("Volume of the sphere = %lf%s\n", volume, unit);


    return 0;
}