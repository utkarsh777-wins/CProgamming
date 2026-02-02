#include <stdio.h>

int main() {
    int n;
    printf("enter no. ");
    scanf("%d", &n);

    int i =1;
    while(i <= n) {
        printf("%d\n", i);
        i++;
        while(i % 2 == 0) {
            printf("%d", i);
            printf(" even while\n");
            i++;
        }
    }
    return 0;
}