#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);


int main() {
    
    // ROCK PAPER SCISSORS

    //currrent time in seconds and using it as seed 
    srand(time(NULL));
    
    printf("^^^ ROCK PAPER SCISSORS ^^^\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    // examining userChoice

    switch(userChoice) {
        
        case 1:
        printf("You choose ROCK!\n");
        break;

        case 2:
        printf("You choose PAPER!\n");
        break;

        case 3:
        printf("You choose SCISSORS!\n");
        break;
        
    }

    // examining computerChoice

    switch(computerChoice) {
        
        case 1:
        printf("Computer choose ROCK!\n");
        break;

        case 2:
        printf("Computer choose PAPER!\n");
        break;

        case 3:
        printf("Computer choose SCISSORS!\n");
        break;
        
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice() {

    // random number b/w 0-2 and + 1 as offset 
    // => random number b/w 1-3

    return (rand() % 3) + 1;
    
}
int getUserChoice() {
    
    int choice = 0;

    // the loop will keep asking for user input
    // will only stop when the user input is between 1-3

    do {

        printf("Pick an option: \n");
        printf("1. ROCK\n");
        printf("2. PAPERR\n");
        printf("3. SCISSORS\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        
    } while (choice < 1 || choice > 3);

    printf("\n");
    return choice;

}
void checkWinner(int userChoice, int computerChoice) {

    if(userChoice == computerChoice) {
        printf("It's a TIE!");
    } else if(

        (userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2) 

    ) {printf("You WIN :)\n");}
    else {
        printf("You LOSE :(\n");
    }
}