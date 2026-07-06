#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    /*
    
    --malloc--
    a function in c that dynamically allocates
    a specified number of bytes in memory 
    
    */

    // predetermined size
    // char grades[5] = {0};

    // dyanmic size
    // let's not hardcode the size 
    // char* grades = malloc(100);

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);
    
    char* grades = malloc(number * sizeof(char));

    // incades the operation inside malloc fails 
    if(grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    //taking user input 
    for(int i=0;  i<number; i++) {

        //since i=0 in first iteration, we are adding an offset of 1
        printf("Enter grade #%d: ", i+1);
        // scanf(" %c", &grades[i]);
        scanf(" %c", (grades+i));
        
        // // printing the grades 
        // printf("%c ", grades[i]);
        // printf("\n");

    }

    // printing the grades 
    for(int i=0; i<number; i++) {

        // accessing the idx as an array
        // printf("%c ", grades[i]);

        /* 
        
        accessing the idx as a pointer(memory address)
        derefrencing the sum of grades tweaks the memory address just as we want 
        this way we can derefrence the value at contigous memory location easily 

        */

        printf("%c ", toupper(*(grades+i)));

    }

    printf("\n");

    free(grades);   // returning the rented space back to the OS
    grades = NULL;  // avoids dangling pointers

    return 0;

}