#include <stdio.h>
// function to reverse an array 
int reverse(int arr[], int size);
void printRevArray(int arr[], int n);

int main() {
    int array[] = {1, 2 ,3 ,4, 5};
    reverse(array, 5);
    printRevArray(array, 5);
}

int reverse(int arr[], int size) {
    for(int i=0; i<size/2; i++) {
        // intialising the values of the first and the last index 
        int firstVal = arr[i];
        int secondVal = arr[size-i-1];

        // exchaging the values 
        arr[i] = secondVal; arr[size-i-1] = firstVal;
    }
}

void printRevArray(int arr[], int n) {

    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}