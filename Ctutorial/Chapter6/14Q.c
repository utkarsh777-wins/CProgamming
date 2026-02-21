#include <stdio.h>
// WAP to calculate the sum, product and average of two numbers

void calculate(int a, int b, int *sum , int *prod, int *avg);

int main() {
    int x=5, y=9;
    // scanf("%d %d", &x, &y);
    int sum, prod, avg;

    calculate(x, y, &sum, &prod, &avg);
    printf("sum= %d, product= %d, average= %d\t", sum, prod, avg);
}

// this function contains both pass by refence and pass by value
void calculate(int a, int b, int *sum, int *prod, int *avg) {
   *sum = a+b;
   *prod = a*b;
   *avg = (a+b)/2;
}