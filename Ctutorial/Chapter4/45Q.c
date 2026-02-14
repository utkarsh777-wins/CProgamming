// #include <stdio.h>

// int main() {
//     int n = 4;
//     int i = 1;
//     while(i <= 4) {
//         for(j = n; j>0; j--) {
//             printf(" ");
//         }
//         for(int n-)
//     }
// }

#include <stdio.h>

int main() {
    int n, count = 0;
    printf("enter your number:  ");
    scanf("%d", &n);

    int org = n;
    int sum = 0;

    while(n != 0) {
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
        
    }
    printf("%d", sum);
    return 0;
}