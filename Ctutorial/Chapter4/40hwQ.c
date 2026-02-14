// #include <stdio.h>
// int main() {
//     char star = '*';
//     int i = 1;
//     int j = 1; // so my mistake here was initialising i outside the while loop
//     // have had i intialised this within the loop i weould've gotten the correct output
//     while(j<=4){

//         while(i<=5){
//             printf(" %c", star);
//             i++;
//         }
//         printf("\n");
//         j++;
        
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    char star = '*';
    int i = 1;

    while(i <= 4) {
        int j = 1;
        while(j <=5) {
            printf(" %c", star);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}