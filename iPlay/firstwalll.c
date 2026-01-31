#include <stdio.h>

int main() {
    int num;
    printf("enter thee value of num here : ");
    scanf("%d", &num);

    int sum = 0;
    int i = 1;

    while(i <= num) {
        sum += i;
        i++;
    }
    printf("sum is = %d\n", sum);

    int j = num;
    while(j >= 1) {
        printf("%d\n", j);
        j--;
    }

    return 0;
}