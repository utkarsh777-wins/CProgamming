// // WAP to check if number is prime or not.
#include <stdio.h>

int main() {
    // user input
    int num = 7;

    // taking a storage container and looping it 
    int div = 0;
    for(int i=2; i<num; i++) {
        // if(num == 1) {
        //     continue;
        // } else if(num == num) {
        //     continue;
        // }
        // div += num % i;
        if(num % i == 0) {
            // printf("Not PRIME!\n");
            div += 1;
        }
    }

    if(div == 1) {
        printf("Not PRIME!");
    }
    else {printf("PRIME!!!");}
    

    //testing 
    // printf("%d", div);

    // if(div == 0) {
    //     printf("Not prime")
    // }
    return 0;
//CLEAN THIS UP!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);

//     int div = 0;
//     int i = 2;
//     while(i < n) {
//         if(n % i == 0) {
//            div += 1;
//         }
//         i++;
//     }
//     if(div >= 1) {
//         printf("not prime ");
//     }
//     else {
//         printf("prime");
//     }

//     return 0;
// }