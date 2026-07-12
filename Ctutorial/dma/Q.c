#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* readStr() {

    // char *temp; 
    // stack based temporary arrays are more effiecient than 
    // heap based temporary pointers
    // the os automaticaly retrieves the stack memory once  the function is executed
    char temp[51];
    scanf(" %[^\n]", temp);

    // allocating space for strlen+1 +1 for the null terminator at the end 
    char *result = malloc((strlen(temp) + 1) * sizeof(char));

    // incase if memory allocation fails
    if(result != NULL) {
        strcpy(result, temp);
    } else {
        printf("Memory allocation failed!\n");
    }

    return result;

}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    /*
    
Write a C program that:
    Uses malloc() to allocate memory for an array of 10 integers.
    Stores the numbers 1 to 10 in the array.
    Prints the array values.
    Frees the allocated memory.
    
    */

    // // dynamic size of the array 
    // int size = 0;
    // printf("Enter the size of you array: ");
    // scanf("%d", &size);

    // // allocating the space 
    // int *arr = malloc(size * sizeof(int));

    // for(int i=0; i<size; i++) {
    //     arr[i] = i+1;
    //     printf("%d ", arr[i]);
    // }

    // printf("\n");

    // // freeing the reserved space 
    // free(arr);

    /*
    
Write a C program that:

Dynamically allocates memory to store a string entered by the user (assume max length 50).

Prints the string back to the user.

Frees the memory after use.
    
    */

    // char *str = readStr();

    // if(str != NULL) {
    //     printf("%s\n", str);
    // }

    // // freeing the reserved heap memory 
    // free(str);

    /*
    
Write a C program that:

Allocates memory for 5 integers using calloc().

Stores values in the array and prints them.

Uses realloc() to resize the array to hold 10 integers.

Stores additional values and prints the new array.

Frees the memory at the end.
    
    */

    int number = 0;
    printf("Enter the number integers you want to store: ");
    scanf("%d", &number);

    // reserving the space from the heap using calloc 
    int* arr = calloc(number, sizeof(int));\

    // printf("%d", *(arr+1));  //testing manually

    // incase if calloc fails
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; //exit status 
    }

    // filling the values in the reserved space
    for(int i=0; i<number; i++) {
        printf("Enter number #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // asking the user if they want to enter more values
    char choice = '\0';
    int newNumber = 0;
    printf("User-sama, do you want ot store more values? (y/n): ");
    scanf(" %c", &choice);

    if(tolower(choice) == 'y') {

        printf("How many more values do you want to store?: ");
        scanf("%d", &newNumber);

        // calculating the increment 
        newNumber += number;

        // reallocating the space 
        int* temp = realloc(arr, (newNumber * sizeof(int)));

        // incase reallocation fails -- null gets returned by realloc function
        if(temp == NULL) {
            printf("Reallocation failed!\n");
        } else {
            // handing the memoruy address of the allocated space to arr
            // setting temp back to null after it's usage is complete(avoids dangling pointer)
            // this process helps us retain the data that was already stored in arr as well as with the realloc
            arr = temp;
            temp = NULL;

            // filling the remaining reserved space 
            for(int i=number; i<newNumber; i++) {
                printf("Enter number #%d: ", i+1);
                scanf("%d", (arr+i));
            }

            // printing the values
            printf("ThankYou ^.^\n");
            printf("Here is your stored data: \n");
            printArr(arr, newNumber);
            
            
        }
        
    } else if(tolower(choice) == 'n') {
        
        // printing the values
        printf("ThankYou ^.^\n");
        printf("Here is your stored data: \n");
        printArr(arr, number);
        
    } else {
        printf("Invalid Choice\n");
    }
    
    // freeing the reserved memory back to the heap 
    free(arr);
    arr = NULL;
    
    return 0;

}