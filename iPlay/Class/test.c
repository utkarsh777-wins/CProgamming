#include <stdio.h>

void revArray(int arr[], int n) {

    // for(int i=0; i<n/2; i++) {
    //     //declaring the first and last idx
    //     int firstIdx = arr[i];
    //     int lastIdx = arr[n-i-1];

    //     //reversingn the first and last idx
    //     arr[i] = lastIdx;
    //     arr[n-i-1] = firstIdx;
    // }

    int start = 0, end = n-1;
    while(start<end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;

    }

}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {2, 6, 9, 7, 1};
    int size = sizeof(array)/sizeof(array[0]);

    //reversing an array
    
    revArray(array, size);
    printArray(array, size);

    //second fastest 
    int n;
    if(scanf("%d", &n) != 1) {
        return 0;
    }

    if(n<2) {
        printf("Insuffiecient Data to find the second fastest time.\n");
    }

    int arr[n];

    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    //first we bubble sort the array in asc 
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1; j++) {
            if(arr[j] > arr[j+1])  {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // then since the array is sorted in asc now we can just pull idx 1 and mark it as second fastest 

    printf("%d\n", arr[1]);


    return 0;
    
}