#include <stdio.h>

int countOdd(int arr[], int n);
int countodd(int n, int arr[n]);

int main() {
    // count the number of odd numbers inside the array
    int arr[] = {1, 2, 4, 5, 7, 9};
    // printf("%d", *(arr+2));
    // printf("%d", *(arr+5));
    printf("Odd ones found: %d", countOdd(arr, 6));
    // int arr[6] = {1,2,3,4,5,6};         //needs some review
    // printf("%d", countodd(6, arr[6]));



    return 0;
}

int countOdd(int arr[], int n) {

    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 != 0) {
            count+=1;
        }
    }

    return count;
}

int countodd(int n, int arr[n]) {       //needs some review

    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {count++;}
    }
    return count;
}