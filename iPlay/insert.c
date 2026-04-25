#include <stdio.h>

int main() {

    int arr[] = {2, 5, 6, 7, 8, 9};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++) {

        arr[i] = arr[i+1];
        printf("%d ", arr[i]);

    }

    printf("\n");

    return 0;
}