#include <stdio.h>

int main() {
    int i = 1, n;
    printf("enter end of range: ");
    scanf("%d", &n);

    int found = 0;

    while(i <= n) {
        found = 0;
        for(int j=2 ; j<i; j++) {
            if(i%j == 0) {
                found = 1;
                break;
            }
        }
        if(!found) {
            printf("%d \t", i);
        }
        i++;
    }
}