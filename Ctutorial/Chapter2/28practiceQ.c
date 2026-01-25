#include <stdio.h>

// if a number is greater than 9 & less than 100
// 1(true) & 0(false)
int main() {
    
    int n;
    printf("enter the number");
    scanf("%d", &n);

    printf("%d", n >= 10 && n <= 99);
}