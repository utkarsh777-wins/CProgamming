// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_LEN 100

// char **allocStr(int n) {

//     char **arr = (char **)malloc(n * sizeof(char*));

//     for(int i=0; i<n; i++) {
//         arr[i] = (char *)malloc(MAX_LEN * sizeof(char));
//     }

//     return arr;
// }

// void fillStr(char **arr, int n) {

//     while((getchar()) != '\n');

//     for(int i=0; i<n; i++) {
//         printf("Enter your string: ");
//         scanf("%s", arr[i]);
//     }

// }

// void sortStr(char **arr, int n) {
//     char *temp = (char *)malloc(MAX_LEN * sizeof(char));
//     for(int i=0; i<n-1; i++) {

//         for(int j=0; j<n-i-1; j++) {

//             if(strcmp(arr[i], arr[i+1])>0) {
//                 strcpy(temp, arr[i]);
//                 strcpy(arr[i], arr[i+1]);
//                 strcpy(arr[i+1], temp);
//             }
//         }
//     }
//     free(temp);
// }

// void freeStr(char **arr, int n) {
//     for(int i=0; i<n; i++) {
//         free(arr[i]);

//     }
//     free(arr);
// }

// int main() {
//     int n;
//     printf("How many strings do you want to enter?: ");
//     scanf("%d", &n);

//     char **fruits = allocStr(n);
//     fillStr(fruits, n);
//     sortStr(fruits, n);

//     printf("\n----------------------here-we-go----\n");
//     for(int i=0; i<n; i++) {
//         printf("%s\n", fruits[i]);
    
//     }

//     freeStr(fruits, n);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

char **allocStr(int n) {

    char **arr = (char **)malloc(n * sizeof(char*));

    for(int i=0; i<n; i++) {
        arr[i] = (char *)malloc(MAX_LEN * sizeof(char));
    }

    return arr;
}

void fillStr(char **arr, int n) {

    // while((getchar()) != '\n'); //don't need this anymore

    for(int i=0; i<n; i++) {
        printf("Enter your string: ");
        //enabled space seperated string 
        scanf(" %[^\n]", arr[i]);
    }

}

void sortStr(char **arr, int n) {
    char *temp = (char *)malloc(MAX_LEN * sizeof(char));
    for(int i=0; i<n-1; i++) {

        for(int j=0; j<n-i-1; j++) {

            if(strcmp(arr[i], arr[i+1])>0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[i+1]);
                strcpy(arr[i+1], temp);
            }
        }
    }
    free(temp);
}

void freeStr(char **arr, int n) {
    for(int i=0; i<n; i++) {
        free(arr[i]);

    }
    free(arr);
}

int main() {
    int n;
    printf("How many strings do you want to enter?: ");
    scanf("%d", &n);

    char **fruits = allocStr(n);
    fillStr(fruits, n);
    sortStr(fruits, n);

    printf("\n----------------------here-we-go----\n");
    for(int i=0; i<n; i++) {
        printf("%s\n", fruits[i]);
    
    }

    freeStr(fruits, n);

    return 0;
}

// this one needs more practice