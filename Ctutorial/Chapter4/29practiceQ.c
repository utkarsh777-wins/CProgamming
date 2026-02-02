#include <stdio.h>
int main() {
    // keep taking numbers as input fromm user until
    // user enters a number which is a multiple of 7

    int n;
    while(1) {
        printf("enter : ");
        scanf("%d", &n);
        printf("%d\n", n);
        
        if(n%7 ==0) {
            break;
        }
    }
    printf("FoundYa");
    return 0;
}