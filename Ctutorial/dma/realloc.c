#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    
    --realloc() --Reallocation
    Resize previously allocated memory 
    realloc(ptr, bytes)
    
    */

    // taking user input in
    int number = 0;
    printf("Enter ther number of products: ");
    scanf("%d", &number);

    // allocating space for storing the price and the given number of products 
    float *prices = malloc(number * sizeof(float));

    // in case if memory allocation fails 
    if(prices == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // storing the prices at the reserved indices
    for(int i=0; i<number; i++) {

        printf("Enter price #%d: ", i+1);
        scanf("%f", (prices+i));
    }

    // adding additional elements to our array like data structure 
    int newNumber = 0;
    printf("Enter the number of additional products: ");
    scanf("%d", &newNumber);

    // reallocating space for additional prices 
    float* temp = realloc(prices, (newNumber) * sizeof(float));

    // again incase memory allocation fails 
    if(temp == NULL) {
        //  here we don't want to exit so we are not using return 1
        printf("Could not reallocate memory!\n");
    } else {
        prices = temp;
        temp = NULL;

        // storing the additional values 
        // starting where we left off
        for(int i=number; i<newNumber; i++) {
            printf("Enter price #%d: ", i+1);
            scanf("%f", (prices+i));
        }

        // printing the stored data 
        for(int i=0; i<newNumber; i++) {
            printf("$%.2f ", *(prices+i));
        }
    }
 

    printf("\n");

    

    // freeing the reserved space after usage 
    free(prices);
    prices = NULL;

    return 0;

}