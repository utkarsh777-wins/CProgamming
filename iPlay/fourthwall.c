//rotating an array and that shady pattern with stars 
//Binary Search 
#include <stdio.h>

void bubbleSort(int *arr, int size) {
    for(int i=0 ;i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(*(arr+j) > *(arr+j+1)) {

                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;

            }
        }
    }
}

void printArray(int *arr, int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

int main() {

    int arr[] ={3, 9, 7, 44, 34, 32, 22, 21, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    //step 1 of binary search --sorting 
    bubbleSort(arr, n);
    printArray(arr, n);

    int low=0, high=n-1;
    int target;
    scanf("%d",  &target);

    int found = 0;
    while(low<=high) {

        int mid = low + (high-low)/mid;
        
        if(target == *(arr+mid)) {
            printf("Target found at index, %d", mid);
            found = 1;
            return 0;
        } else if(target < *(arr+mid)) {
            high = mid - 1;
        } else if(target > *(arr+mid)) {
            low = mid + 1;
        }

    }

    if(!found) {
        printf("Item not found in the given Dataset!!");
    }

    return 0;




    

}