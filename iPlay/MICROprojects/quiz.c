#include <stdio.h>
#include <ctype.h>

int main() {
    
    // QUIZ GAME

    // question array --2D   --100 characters cap
    char questions[][100] = {

        {"Where is my eye?"},
        {"What happened to me?"},
        {"What am I going to do now?"},
        {"What do I want?"}

    };

    // options array    --3D
    char options[][4][100] = {

        {
            {"A. At someone else"},
            {"B. At work"},
            {"C. At you"},
            {"D. Nowhere, I am lost"}
        },

        {
            {"A. I lost my mind"},
            {"B. I lost my spirit"},
            {"C. I choose comfort and distractions"},
            {"D. Others are responsible for this"}
        },
        {
            {"A. Hone my will, starting facing the world"},
            {"B. Escape"},
            {"C. Hold myself back"},
            {"D. Live my life blaming it all on others"}
        },
        {
            {"A. Solace"},
            {"B. Salvation"},
            {"C. Sin"},
            {"D. Sorrow"}
        }
    };

    // answerKey array  --1D
    char answerKey[] = {'D', 'C', 'A', 'B'};

    // calculating the number of iterations
    int questionCount = sizeof(questions) / sizeof(questions[0]);
    int optionsInEachLayer = sizeof(options) / sizeof(options[0]);

    char guess = '\0';
    int score = 0;

    // starting the game
    printf("*** [LIFE GAME] ***\n");
    printf("\n");

    // main loop
    for(int i=0; i<questionCount; i++) {

        // printing the questions
        printf("%s\n", questions[i]);

        // printing the options 
        for(int j=0; j<optionsInEachLayer; j++) {
            printf("%s\n", options[i][j]);
        }

        // user input
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);
        printf("\n");

        // comparing the answer         
        // tolower handles edge cases of lowercae letters

        if((answerKey[i] == toupper(guess))) {

            printf("CORRECT!\n");
            score++;

        } else {

            printf("WRONG!\n");

        }

        printf("\n");
    }

    // final score 
    printf("Your score is %d out of %d\n", score, questionCount);

    return 0;
}