#include <stdio.h>

int fibonacci(int n);
int main() {
    int num;
    printf("enter your number: ");
    scanf("%d", &num);

    printf("%d", fibonacci(num));

    return 0;
}

int fibonacci(int n) {

    if(n == 0) {return 1;}
    if(n == 1) {return 1;}

    int a = fibonacci(n-1);
    int b = fibonacci(n-2);
    int fibo = a + b;
    printf("%d\n", fibo);
    return fibo;
}