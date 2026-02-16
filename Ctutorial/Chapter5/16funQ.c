#include <stdio.h>
float convertF(float c);

int main() {
    float celsius;
    printf("enter temperature in Celsius: ");
    scanf("%f", &celsius);

    convertF(celsius);

    return 0;
}

float convertF(float c) {
    // float f = c * 9/5 + 32; due to int division value isn't accurate
    float f = c * (9.0 / 5.0) + 32;
    // .2f made the final output roundoff 
    // since the final output was 6 digit
    printf("%f degree farenheit\n", f);
}