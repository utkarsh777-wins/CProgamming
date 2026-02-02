#include <stdio.h>

int main() {
    int num;
    printf("enter the value for n : ");
    scanf("%d", &num);

    int sum = 0;
    for(int i=1; i<=num; i++) {
        sum += i; //sum = sum +i
        // printf("%d\n", sum); //iterations
    }
    printf("sum is %d\n", sum);

    for(int i=num; i>=1; i--) {
        printf("%d\n", i);
    }
    return 0;
}
// printing them in reverse

