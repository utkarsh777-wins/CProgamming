// print the factorial of a number n.
#include <stdio.h>
int main() {
    int n;
    printf("enter the value for n");
    scanf("%d", &n);
    
    int fact = 1;
    for(int i = 1; i<=n; i++) {
        fact *= i;
    }
    printf("Factorial of n = %d\n", fact);
    return 0;
}