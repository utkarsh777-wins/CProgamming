// print the sum of first natural numbers
// #include <stdio.h>

// int main() {
//     int num;
//     printf("enter the value of n : ");
//     scanf("%d", &num);

//     int i = 1;
//     int sum = 0;
//     do {
//         sum += i;
//         printf("%d\n", sum);
//         i++;
//     } while(i <= num);
//     return 0;

// }
#include <stdio.h>
int main() {
    int num;
    printf("enter the value of num : ");
    scanf("%d", &num);

    int sum = 0;
    int i = 1;
    do {
        // sum = sum +i;
        sum += i;
        i++;
        // printf("%d\n", sum);
        // done
    } while(i <= num);
    // printf("%d", i);
    printf("sum = %d\n", sum);
    int j = num;
    do {
        printf("%d\n", j);
        j--;
    } while(j>=1);
//     do {
//         i = i-i;
//         sum -= i;
//         printf("%d\n", sum);
//         i--;
//     } while("%d", i >= num); //still couldn't quite reverse the loop

//     return 0;
}