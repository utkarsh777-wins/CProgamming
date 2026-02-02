// #include <stdio.h>

// int main() {
//     int num;
//     printf("enter the value for num : ");
//     scanf("%d", &num);
//     int sum = 0;
//     for(int i=1,j=num; i<=num && j>=1; i++, j--) {
//         sum += i;
//         printf("%d\n", j);
//     }
//     printf("sum is = %d", sum);

//     return 0;
// }
#include <stdio.h>
int main() {
    int num;
    printf("enter the value for num : ");
    scanf("%d", &num);

    int sum = 0;
    for(int j=num; j>=1; j--) {
        sum += j;
        printf("%d\n", j);
    }
    printf("sum is = %d", sum);
    return 0;
}