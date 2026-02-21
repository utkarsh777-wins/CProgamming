#include <stdio.h>

void square(int n);
void _square(int *n);

int main() {

    int num;
    printf("enter: ");
    scanf("%d", &num);

    square(num);
    printf("num= %d\n", num);

    // change in value of n 
    _square(&num);
    printf("num= %d\n", num);

}

// call by value
void square(int n) {
    n = n*n;
    printf("square= %d\n", n);
}

// call by refemrence
void _square(int *n) {
    *n = (*n) * (*n);
    printf("sqaure= %d\n", *n);
}