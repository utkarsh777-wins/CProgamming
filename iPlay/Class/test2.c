// #include <stdio.h>

// int main() {
//     int arr[] = {1, 3, 20, 43, 1};
//     int n=5;
    
//     // peak algorithm
//     for(int i=1; i<n-1; i++) {
//         if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
//             printf("Peak: %d\n", arr[i]);
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

void lhTemperatures(int n);

int main() {

    int n;
    printf("enter the number of readings: ");
    scanf("%d", &n);

    lhTemperatures(n);

    return 0;

}

void lhTemperatures(int n) {

    double arr[n];
    for(int i=0; i<n; i++) {
        scanf("%lf", &arr[i]);
    }

    //sort asc
    for(int x=0; x<n-1; x++) {
        for(int y=0; y<n-x-1; y++) {
            if(arr[y] > arr[y+1]) {
                double temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
    }

    //o/p
    for(int i=0; i<n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    printf("Lowest Temprature = %.2f degrees.\n", arr[0]);
    printf("Highest Temperature = %.2f degrees.\n", arr[n-1]);

}