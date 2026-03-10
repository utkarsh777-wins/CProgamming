#include <stdio.h>

int fibo(int n) {
    if(n == 0) {return 0;}
    else if(n == 1) {return 1;}
    else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main() {
    int i;
    printf("enter the count of the sequence: ");
    scanf("%d", &i);
    for(int  j=0; j<=i; j++){
        printf("%d\t", fibo(j));
    }

    return 0;
}