// WAP to print prime number in a range
// #include <stdio.h>

// int main() {
//     int initial, b;
//     printf("enter you range seperated by commas(initial, b): ");
//     scanf("%d %d", &initial, &b);

    
//     int prime = 0;
//     for(int i=1; i<b; i++) {
//         for(int j=initial; i<b, j++){
            
//         }



//     return 0;

// }
#include <stdio.h>
int  main() {
    int a,b;
    printf("enter the range seperated by space:  ");
    scanf("%d %d", &a, &b);
    // printf("%d", b);

    while(a < b) {
        int vd = 0;
        // if(a==2) continue;
        for(int i = 2; i < a; i++){
            if(a%i == 0) {
                vd += 1;
            }
            // printf("%d" , i);
        }
        if(vd == 0) {
            printf("%d\n", a);
        }
        a++;
    }


    return 0;
}