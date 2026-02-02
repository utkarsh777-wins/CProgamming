// print the sum of all the numbers between 5 & 50 including 5 and 50
// #include <stdio.h>

// int main() {
//     int i = 5;
//     int sum = 0;
//     do{
//         sum += i;
//         i++;
//     } while(i <= 50);
//     printf("sum is = %d\n", sum);

//     return 0;
// }

#include <stdio.h>

int main() {
    int sum = 0;
    for(int i = 5; i<= 50; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);

    return 0;
}