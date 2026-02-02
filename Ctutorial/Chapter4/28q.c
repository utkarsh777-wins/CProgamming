// #include <stdio.h>

// int main() {
//     for(int i; 1; ) {
//         printf("enter : ");
//         scanf("%d", &i);
//         printf("%d\n", i);
//         if(i%2 != 0) {
//             break;
//         }
//     }
//     printf("ODD");
//     return 0;
// }

#include <stdio.h>
int main() {
    int n;
    while(1) {
        printf("enter : ");
        scanf("%d", &n);
        printf("%d\n", n);
        if(n%2 != 0) {
            break;
        }
    }
    printf("END");

    return 0;

}