#include <stdio.h>

long long pewPow(int x, int y);

int main() {
    int m, n;
    printf("enter base and exponent space seperated: ");
    scanf("%d %d", &m, &n);

    long long result = pewPow(m, n);
    printf("%lld", result);

}

long long pewPow(int x, int y) {

    long long pew = 1;
    int i=1;
    // if(y == 0){printf("1");}
    while(i<=y) {
        pew = pew*x;
        i++;
    }

    return pew;
}
