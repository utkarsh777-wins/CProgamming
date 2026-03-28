#include <stdio.h>

int main() {
    int est[6];

    //input 
    int *ptr = &est[0];
    for(int i=0; i<6; i++) {
        printf("%d index : ", i);
        scanf("%d", (ptr+i));
        scanf("%d", est[i]);
    }

    // int n = sizeof(est);
    // printf("%d", n);
    for(int i=0; i<6; i++) {
        printf("%d\t", est[i]);
        // printf("%d\t", *(ptr+i));    //value at adress

    }

    return 0;
}