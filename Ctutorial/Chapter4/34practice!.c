// print reverse of the table of a number n
// #include <stdio.h>
// int main() {
//     int n;
//     printf("enter : ");
//     scanf("%d", &n);

//     int i = 10;
//     do {
//         printf("%d X %d = %d \n", n, i, n*i);
//         i--;
//     } while(i>=1);

//     return 0;
// }
#include <stdio.h>
int main() {
    int n;
    printf("enter : ");
    scanf("%d", &n);

    for(int i=10; i>=1; i--) {
        printf("%d X %d = %d \n", n, i, n*i);
    }
    return 0;
}