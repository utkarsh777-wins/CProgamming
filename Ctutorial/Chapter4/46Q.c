// #include <stdio.h>

// int main()  {
//     int n, rev = 0;
//     printf("enter your number: ");
//     scanf("%d", &n);

//     while(n != 0)  {

//         int digit = n%10;
//         rev = digit + (rev*10);
//         n = n/10;
//     }

//     printf("%d", rev);
//     return 0;
// }

// #include <stdio.h>

// int  main() {
//     int n, digit = 0;
//     printf("enter your number: ");
//     scanf("%d", &n);

//     int og = n;
//     // printf("%d\n", og);

//     int rev = 0;
//     while(n != 0) {
//         int digit = n%10;
//         rev =  digit + (rev*10);
//         n=n/10;
//     }

//     // printf("%d\n", rev);

//     if(rev == og) {
//         printf("number is a pallindrome\n");
//     } 
//     else {
//         printf("not a pallindrome\n");
//     }

//     return 0;
// }


// sum of first and last digit of a number
// #include <stdio.h>

// int main() {
//     int n, first;
//     printf("enter your number : ");
//     scanf("%d",  &n);

//     int last_digit = n%10;
//     // int first_digit = 0;

//     while(n >= 10) {
//         first = n/10;
//         n=n/10;
//     }
//     printf("%d", last_digit + first);

//     return 0;
// }

// duck number
// #include <stdio.h>

// int main() {
//     int n, duck;
//     printf("enter your number: ");
//     scanf("%d", &n);

//     while(n != 0) {
//         int rem = n%10;
//         if(rem == 0) {
//             duck = 1;
//             break;
//         }
//         n=n/10;
//     }

//     if(duck == 1) {
//         printf("duck");
//     }
//     else {
//         printf("non duck");
//     }


//     return 0;
// }


//153 = 1 cube + 5 cube + 3 cube = 1 + 125 + 27 = 153
#include <stdio.h>
int main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int i = 1;
    // int last_d = n%10;
    int digits;

    while(n >= 10) {
        digits = n/10;
        n/=10;
    }

    while()

    return 0;
}



