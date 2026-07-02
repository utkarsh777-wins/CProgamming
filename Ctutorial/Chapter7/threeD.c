#include <stdio.h>

int main() {
    int arr[][3][4] = {

        // layer one (idx 0)  --the third dimension is layer/depth
        {
            {1, 3, 4, 5},
            {7, 5, 9, 8},
            {2, 4, 7, 6}
        },  

        //layer two (idx 1)
        {
            {4, 6, 5, 2},
            {3, 7, 5, 7},
            {1, 8, 8, 9}
        }
    };

    for(int p=0; p<2; p++) {

        printf("Here goes layer %d\n", p);

        for(int r=0; r<3; r++) {
            for(int c=0; c<4; c++) {
                printf("%d ", arr[p][r][c]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}