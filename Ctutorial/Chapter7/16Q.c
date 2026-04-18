// #include <stdio.h>

// // in an array how many times does a number x occur
// int main() {
//     int x = 6;
//     int arr[5] = {4,6,5,3,6};

//     int count = 0;
//     for(int i=0; i<5; i++) {
//         if(arr[i] == x) {
//             count = count + 1;
//         }
//     }
//     printf("%d occurs %d times in the Array\n", x, count);

//     return 0;
// }

//largest number in an array 
#include <stdio.h>

void largestNum(int arr[], int n) {

    int xl = arr[0];
    for(int i=0; i<n; i++) {

        if(arr[i] > xl) {
            xl = arr[i];
        } 
    }

    printf("The largest number in the array is = %d\n", xl);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    largestNum(arr, n);

    return 0;
}