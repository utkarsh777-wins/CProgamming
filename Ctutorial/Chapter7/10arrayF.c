
#include <stdio.h>

void printNumbers(int *arr, int n);

int main() {
    int arr[] = {1, 6, 7, 8, 9};
    printNumbers(arr, 5);

    return 0;
}

void printNumbers(int *arr, int n) {
    for(int i=0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}