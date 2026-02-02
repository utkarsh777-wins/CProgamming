// #include <stdio.h>
// int main() {
//     // print all the odd numbers from 5 to 50
//     int i = 5;
//     while(i <= 50) {
//         if(i%2 == 0) {
//             continue;
//         }
//         else {
//             printf("%d\n", i);
//         }

//         i++;
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    for(int i=5; i<=50; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
        }
        else {
            continue;
        }
    }
    return 0;
}