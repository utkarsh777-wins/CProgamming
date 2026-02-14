#include <stdio.h>

int sum(int n);

int main() {
    // sum of first n natural numbers
    int n=10;
    printf("sum is = %d", sum(n));

    return 0;
}

int sum(int n) {
    if(n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1);    //sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;

}