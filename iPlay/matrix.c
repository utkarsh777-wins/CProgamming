// #include <stdio.h>
// int main() {
//     int A[2][2] = {{5,4}, {6,3}};
//     int B[2][2] = {{3,4}, {5,3}};
//     int C[2][2];

//     int r1=2, c1=2, r2=2, c2=2,i,j,k;


//     for(i=0; i<2; i++) {
//         for(j=0; j<2; j++) {
//             C[i][j]=0;
//         }
//     }

//     for(i=0; i<r1; i++) {
//         for(j=0; j<2; j++) {
//             printf("%d", C[i][j]);
//         }
//         printf("\n");
//     }

//     // ..matrix multiplication
//     for(i=0; i<r1; i++) {
//         for(j=0; j<c2; j++) {
            
//         }
//     }
// }
// void printDiagonal(int A[][]) {
//     for(int i=0; i<3; i++) {
//         int j = i;
//         printf("%d ", A[i][i]);
//     }
// }

#include <stdio.h>

// 3x3 matrix  
int main() {
    int A[3][3] = {{5,3,2},{1,4,7},{2,6,8}};
    int B[3][3] = {{4,1,3},{5,2,8},{7,9,6}};

    int C[3][3];
    printf("C matrix: \n");

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            C[i][j] = 0;
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<3; k++) {
                C[i][j] += A[i][j] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix: \n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    printf("Diagonal Elements: \n");
    for(int i=0; i<3; i++) {
        printf("%d ", A[i][i]);
        sum += A[i][i];
    }
    printf("\n");
    printf("SUM of diagonal elements: %d ", sum);
}

//diagonal elemnts of the matrix