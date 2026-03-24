// #include <stdio.h>
// int main() {
//     // double b = 5 & 3 && 4 || 5 | 6;
//     // int b = 5 + 7 * 4 - 9  * (3,2);
//     // printf("%lf", b);
//     // printf("%d", b);
//     // int a = -1; int b = 4; int c = 1; int d;
//     // d = ++a && ++b || ++c;
//     // printf("%d, %d, %d, %d\n", a, b, c, d);
//     // printf("%d", 012 + 10);
//     // printf("%d", 5 + 3 * 2 % 4);
//     // printf("%d", 6/4);
    
    
//     return 0;
// }
// #include <stdio.h> 

// void getDetails();
// void yes();
// void no();

// int main() { 
//     // int i; 
//     // for (i = 0; i < 5; i++) { 
//     //     if (i == 2) 
//     //     goto end; 
//     // } 
//     // end: 
//     // return i;
//     // int tem = 6;
//     // printf("%d", -tem);
//     getDetails();
//     // printf("%d", 3&&990);
//     return 0;
// }

// void getDetails() {
//     char get;
//     printf("Enter: (Y/N): ");
//     scanf("%c", &get);
//     if(get == 'Y' || get == 'y') {yes();} else if(get == 'N' || get == 'n') {no();} else{ printf("Invalid");}
// }

// void yes() {
//     printf("yessssssssssssss!");
// }

// void no() {
//     printf("noooooooooo!");
// }
#include <stdio.h>

int takeInput(int arr[], int n) {
    for(int i=1; i<n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    for(int i=1; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

// int main() {
//     int a[9];
//     takeInput(a, 9);
//     printArray(a, 9);
    
//     return 0;
// }
int main() {
    int n;
    printf("number of elements inside the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}