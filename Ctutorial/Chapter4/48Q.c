#include <stdio.h>

int main() {
    int n = 6; // Adjust n to change the size of the heart

    // 1. THE TOP PART (The two humps)
    for (int i = n / 2; i <= n; i += 2) {
        // Left hump leading spaces
        for (int j = 1; j < n - i; j += 2) {
            printf(" ");
        }
        // Left hump stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Middle gap
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Right hump stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. THE BOTTOM PART (The inverted triangle)
    for (int i = n; i >= 1; i--) {
        // Leading spaces to create the 'V' shape
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // Printing stars
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}