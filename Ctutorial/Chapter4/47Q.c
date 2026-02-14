// #include <stdio.h>
// int main() {
//     long long int n;
//     scanf("%lld", &n);

//     long long int i = 1;
//     long long int sum = 0;
//     while(i<=n) {
//         sum += i;
//         i++;
//     }
//     printf("%lld", sum);

//     return 0;
// }

// armstrong number

#include <stdio.h>

int main() {
    int n;
    printf("enter your number: ");
    scanf("%d", &n);

    int digit;
    while(n != 0) {
        digit = n/2;
        printf("%d", digit);
        n = n/10;
    }
}