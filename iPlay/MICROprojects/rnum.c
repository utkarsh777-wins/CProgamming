#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//pseudo-random numbers

int main() {
    // printf("%d", rand()); //41 each time 

    // using the current time as base seed
    srand(time(NULL));

    // printf("%d", rand());
    // outputs the maximum value of random numbers-
    // -based upon the seed generated, which is based upon the os and compiler you're using 
    // printf("%d", RAND_MAX);

    int min = 50;
    int max = 100;

    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min +1)) + min;
    int randomNum3 = (rand() % (max - min +1)) + min;

    printf("%d %d %d", randomNum1, randomNum2, randomNum3);


    return 0;
}