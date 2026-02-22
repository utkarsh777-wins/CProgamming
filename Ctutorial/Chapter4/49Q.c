// CW
// #include <stdio.h>

// int main() {
//     int num, i=1;
//     scanf("%d", &num);

//     do{
//         printf("%d X %d = %d\n", num, i, num*i);
//         i++;
//     } while(i<=10);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int i = 1;
//     int div = 0;
//     while(i<n) {
//         if(n%i == 0) {
//             div += 1;
//         }
//         i++;
//     }
//     if(div == 0) {
//         printf("prime");
//     } else {printf("not prime");}

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int num;
//     scanf("%d", &num);

//     int flag = 0;
//     for(int i = 2; i<num; i++) {
//         if(num%i == 0) {
//             flag += 1;
//         }
//     }
//     if(flag == 0) {printf("PRIME!");}
//     else {printf("NOT PRIME!");}

//     return 0;
// }

#include <stdio.h>
int main() {
    int num, i, found = 0;
    printf("enter your number: ");
    scanf("%d", &num);

    for(i=2; i<num; i++) {
        if(num%i == 0) {
            found = 1;
            // break; //this break here skips the extra iterations
        }
    }

    if(found) {printf("NOT PRIME!");}
    else {printf("PRIME!");}
}

// #include <stdio.h>

// int main() {
//     printf("%d", 0 && 0);
// }
