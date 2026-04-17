#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; i++) {
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSSort(int arr[], int n) {
    int swap=0, passes=0;

    for(int i=0; i<n-1; i++) {

        int currentSwap =0;
        for(int j=0; j<n-i-1; j++) {
            
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                currentSwap++;
                swap++;
            }
        }

        passes++;
        if(currentSwap  == 0) {
            printf("already sorted\n");
            break;
        }

    }
    printArray(arr, n);
    printf("Number of swaps = %d\n", swap);
    printf("Number of passes = %d\n", passes);

}

int main() {
    //testing
    int arr [] = {1, 2, 5, 3, 9, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSSort(arr, size);

    return 0;
}
//bubble sort  //check this over again
// int main() {
//     int n=5;
//     int arr[5] = {18,6,3,45,1};
    
//     for(int i=0; i<n-1; i++) {
//         for(int j=0; j<n-i-1; j++) {
//             if(arr[j] > arr[j+1]) {
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     for(int i=0; i<n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// int main() {
//     int r, c;
//     scanf("%d %d", &r, &c);

//     int arr[100][100];
//     for(int i=0; i<r; i++) {
//         for(int j=0; j<c; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     int Tcolumn;
//     scanf("%d", &Tcolumn);

//     for(int j=0; j<r-1; j++) {

//         for(int i=0; i<r-j-1; i++) {
//             if(arr[i][Tcolumn] > arr[i+1][Tcolumn]) {

//                 int temp = arr[i][Tcolumn];
//                 arr[i][Tcolumn] = arr[i+1][Tcolumn];
//                 arr[i+1][Tcolumn] = temp;

//             }
//         }
//     }

//     for(int i=0; i<r; i++) {
//         for(int j=0; j<c; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

