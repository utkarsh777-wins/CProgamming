#include <stdio.h>

void printTable(int n);

int main()  {
    int n;
    printf("enter your number: ");
    scanf("%d", &n);

    printTable(n); //arguement/actual parameter

    return 0;

}

void printTable(int n) { //parameter/formal parameter 
    int i= 1;
    while(i <= 10) {
        printf("%d X %d = %d\n", n, i, n*i);
        i++;
    }
}