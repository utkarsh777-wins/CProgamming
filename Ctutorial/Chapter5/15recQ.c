#include <stdio.h>

int fact(int n);

int main() {
    int num;
    printf("enter your number: ");
    scanf("%d", &num);

    printf("%d", fact(num));

    return 0;

}

int fact(int n) {
    if(n==0) {
        return 1;
    }
    int factnm1 = fact(n-1);
    int factN = n * factnm1;
    return factN;
    
}