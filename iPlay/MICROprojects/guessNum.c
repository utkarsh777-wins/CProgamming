#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int main() {

//     srand(time(NULL));

//     int rnd=0, user;

//     //making it so the range of the random number is in b/w 1-100
//     rnd = (rand() % 100) + 1;

//     while(1) {

//         // user input
//         printf("Guess the the random number (1-100):) ");
//         if(scanf("%d", &user) != 1) {return 0;}

//         if(user == rnd) {

//             printf("Correct!! You nailed it!");
//             break;
        
//         }

//         else if(user < rnd) {printf("Go higher!\n");}
//         else if(user > rnd) {printf("Go lower!\n");}

//     }

//     return 0;
// }
// //enhance the current interface

int main() {

    //seed value
    srand(time(NULL));

    int guess = 0;
    int lives = 10;
    int min = 1;
    int max = 100;

    // using 1 as offset for cases when % outputs 0;
    int answer = (rand() % (max - min + 1)) + min;

    printf("*** NUMBER GUESSING GAME ***\n");

    do {

        //if all lives are burnt 
        if(lives == 0) 
        {

            printf("\n");
            printf("Game Over :(\n");
            return 0;


        }

        
        printf("\n");
        printf("Guess a number between %d - %d\n", min, max);
        scanf("%d", &guess);
        
        // each guess
        if(guess < answer) {
            printf("TOO LOW\n");
            // one life burns on each failed guess
            lives--;
        } else if(guess > answer) {
            printf("TOO HIGH\n");
            // one life burns on each failed guess
            lives--;
        } else {
            printf("CORRECT!!\n");
            break;
        }


        printf("<3 Remaining lives: %d\n", lives);
        
        
    } while(guess != answer);
    
    printf("The answer is: %d\n", answer);
    printf("You saved %d lives\n", lives);
    
    return 0;
}