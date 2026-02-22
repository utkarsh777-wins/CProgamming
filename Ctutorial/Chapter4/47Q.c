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
#include <math.h>

int main() {
    int num, result=0, remainder, n=0;
    printf("Enter: ");
    scanf("%d", &num);

    int og = num;

    // helps find the number of digits
    int temp = num;
    while(temp != 0) {
        temp = temp/10;
        n=n+1;  
    }

    // squaring the digits of the number
    temp = num;
    while(temp != 0) {
        remainder = temp%10;

        result += pow(remainder, n);
        temp = temp/10;
    }

    // check
    if(num == result) {printf("%d is an armstrong number", num);}
    else {printf("%d is not an armstrong numbeer", num);}

    return 0;
}