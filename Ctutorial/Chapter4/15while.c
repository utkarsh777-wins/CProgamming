// #include <stdio.h>

// int main() {
//     int i = 1;
//     while(i <= 5) {
//         printf("Swallloww\n");
//         i++;
//     }
//     return 0;
// }

#include <stdio.h>

int main() {

    int number = 0;
    int roll = 0;

    while(number <= 0) {
        scanf("%d", &number);
        roll += 1;
    }

    printf("%d Gotcha:/", roll);

    return 0;
    
}