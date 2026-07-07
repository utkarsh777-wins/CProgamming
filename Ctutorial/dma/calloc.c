#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    // calculating the size of the array like dataStructure 
    // replacing malloc with calloc 
    // int *scores = malloc(number * sizeof(int));
    int *scores = calloc(number, sizeof(int));

    // incase of failure in allocation malloc will return NULL
    // derefrencing null will cause segmentation fault 
    // handling the case of NULL 
    if(scores == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // taking user input 
    for(int i=0; i<number; i++) {
        printf("Enter score #%d: ", i+1);
        scanf("%d", &scores[i]);
    }

    // printing out the scores
    // in case of malloc all of these indices will initially contain garbage values
    // in case of calloc these indices will initially contain 0 
    for(int i=0; i<number; i++) {
        printf("%d ", scores[i]);
    }

    // passing in the pointer to dataStructure, when we are done using the borrowed memory 
    // setting the pointer back to null to avoid dangling pointer 
    free(scores);
    scores = NULL;

    return 0;
}