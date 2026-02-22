#include <stdio.h>

int fib(int n);

int main() {
    int num;
    scanf("%d", &num);

    fib(num);

}

int fib(int n) {

    int i = 1, nm1=1, nm2=0;

    while(i <= n) {
        // fibonacci logic
        int nxt = nm1 +nm2;

        // output
        printf("%d \t", nxt);

        // updation
        nm2 = nm1;
        nm1 = nxt;
        i++;
        
    }
}                    