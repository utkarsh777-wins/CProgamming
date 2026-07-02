#include <stdio.h>

int main() {

    // array of strings
    char fruits[][10] = {"Banana","Peach", "Coconut", "Pineapple"};

    // char fruits[][10] = {"Banana", 
    //                      "Peach", 
    //                      "Coconut",
    //                      "Pineapple"
    // }

    int size = sizeof(fruits) / sizeof(fruits[0]);

    // operations using indices
    fruits[0][0] = 'b';
    fruits[0][5] = 'A';

    fruits[1][0] = 'p';
    fruits[1][4] = 'H';

    fruits[2][0] = 'c';
    fruits[2][6] = 'T';

    fruits[3][0] = 'p';
    fruits[3][8] = 'E';


    for(int i=0; i<size; i++) {

        printf("%s\n", fruits[i]);
    }

    return 0;
}