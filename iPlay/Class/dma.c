#include <stdio.h>
#include <stdlib.h>

int main() {

    
    int n;
    printf("number of values you want to store: ");
    scanf("%d", &n);

    // //MALLOC
    // int *arr;
    // arr=(int*)malloc(n*sizeof(arr));

    //CALLOC
    int *arr;
    arr=(int*)calloc(n,sizeof(int));

    for(int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }

    for(int i=0; i<n; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");

    free(arr);

    return 0;

}