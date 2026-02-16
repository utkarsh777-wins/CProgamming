// fabonacci sequence
#include <stdio.h>

int fibonacci(int n);

int main() {
    int num = 6;
    printf("%d", fibonacci(num));
    
    return 0;
}

int fibonacci(int n) {

    // base case
    if(n == 0) {return 0;}
    if(n == 1) {return 1;}
    
    int fnM1 = fibonacci(n-1);
    int fnM2 = fibonacci(n-2);
    int fibo = fnM1 + fnM2;
    return fibo;
}