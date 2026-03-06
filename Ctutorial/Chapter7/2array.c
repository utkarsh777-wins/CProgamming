#include <stdio.h>

int main() {
    int marks[5];

    printf("enter marks in maaths: ");
    scanf("%d", &marks[0]);

    printf("enter marks in physics: ");
    scanf("%d", &marks[1]);

    printf("enter marks in ece: ");
    scanf("%d", &marks[2]);

    printf("enter marks in C: ");
    scanf("%d", &marks[3]);


    printf("array: %d, %d, %d, %d, x", marks[0], marks[1], marks[2], marks[3]);  
}