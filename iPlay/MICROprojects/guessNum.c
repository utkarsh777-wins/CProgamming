#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int rnd=0, user;

    //making it so the range of the random number is in b/w 1-100
    rnd = (rand() % 100) + 1;

    while(1) {

        // user input
        printf("Guess the the random number (1-100):) ");
        if(scanf("%d", &user) != 1) {return 0;}

        if(user == rnd) {

            printf("Correct!! You nailed it!");
            break;
        
        }

        else if(user < rnd) {printf("Go higher!\n");}
        else if(user > rnd) {printf("Go lower!\n");}

    }

    return 0;
}
//enhance the current interface 