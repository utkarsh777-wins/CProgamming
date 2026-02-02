// #include <stdio.h>
// int main() {
//     int num;
//     scanf("%d", &num);

//     int i = 1;
//     do {
//         printf("%d\n", num * i);
//         i++;
//     } while(i <= 10);
//     return 0;
// }

// i want the  output to be in the format of 
// #include <stdio.h>

// int main() {
//     int num;
//     printf("enter the value of num : ");
//     scanf("%d", &num);

//     int i = 1;

//     do {
//         printf("%d X %d = %d\n", num, i, num * i);
//         i++;
//     } while(i <= 10);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int num;
//     printf("enter the value of num : ");
//     scanf("%d", &num);

//     int i = 1;

//     while(i <= 10) {
//         printf("%d X %d = %d\n", num, i, num * i);
//         i++;
//     }
    // return 0;
// }

#include <stdio.h>
int main() {
    int num;
    printf("enter the value of num here : ");
    scanf("%d", &num);

    for(int i=1; i<=10; i++) {
        printf("%d X %d = %d\n", num, i, num * i);
    }
    return 0;
}