// #include <stdio.h>
// #include <stdbool.h>

// int main() {

//     bool isRunning = true;
//     char response = '\0';

//     while(isRunning) {

//         printf("You are playing a game\n");
//         printf("Would you like to continue? (y/n): ");
//         scanf(" %c", &response);
//         printf("\n");

//         if(response != 'y' && response != 'Y') {
//             isRunning = false;
//         }
//     }

//     printf("Farewell^^\n");

//     return 0;
// }

#include <stdio.h>


// woah now this one is rather illusive 
int main() {
    for(int i=1; i<11; i++) {
        for(int j=1; j<11; j++) {
            printf("%3d",  i*j);
        }

        printf("\n");
    }

    return 0;
}