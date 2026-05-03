#include <stdio.h>

#define ARR_SIZE(x) (sizeof(x)/sizeof((x)[0]))

void takeInput(int arr[], int size) {

    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

}
void peakVal(int arr[], int size) {

    for(int i=1; i<size-1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            printf(".\t");
        } else {
            printf(" \n");

        }
    }
}

int main() {

    int n;
    scanf("%d", &n);

    int a1[n];
    takeInput(a1, n);

    peakVal(a1, ARR_SIZE(a1));

    return 0;
}