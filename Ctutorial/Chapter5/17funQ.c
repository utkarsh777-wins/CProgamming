#include <stdio.h>

float perCentage(float x, float y,  float z);

void result(float x, float y, float z);

int main() {
    float science, math, sanskrit;
    printf("enter space separated marks of each subject: ");
    scanf("%f %f %f", &science, &math, &sanskrit);

    result(science, math, sanskrit);

    return 0;
}

float perCentage(float x, float y, float z) {
    float per = (x + y + z) / 3;
    printf("Your result is : %f", per);
}

void result(float x, float y, float z) {
    if(x, y, z < 0 || x, y, z >100) {
        printf("invalid marks");
    }
    else {perCentage(x, y, z);}
}