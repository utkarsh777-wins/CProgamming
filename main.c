#include <stdio.h>

// int main(){

//     printf("C-piled!!!!!");
//     printf("It feels good!");

//     return 0;
// }
int main() {
    int x, y, a, b;
    scanf("%d %d %d %d", &x, &y, &a, &b);

    float r1 = ((float)x+(float)y)/(float)a;
    float r2 = ((float)x+(float)y)/(float)b;

    if(r1>r2) {
        printf("%.2f is greater than %.2f", r1, r2);
    } else {
        printf("%.2f is  not greater than %.2f", r1, r2);
    }
}