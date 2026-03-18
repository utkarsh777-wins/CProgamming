// #include <stdio.h>

// int cSum(int n);

// int main() {

//     int x;
//     printf("enter: ");
//     scanf("%d", &x);
//     int ans  = cSum(x);

//     printf("%d\n", ans);
// }

// int cSum(int n) {
//     int sum = 0;
//     for(int i=n; i!=0; i=i/10) {
//         int digit = i%10;
//         int cube = digit*digit*digit;
//         sum += cube;
//     }
//     return sum;
// }

int fact(int n);

int main() {
    int z;
    scanf("%d", &z);
    fact(z);
}

int fact(int n) {
    int f=1;
    if(n == 0 || n == 1) {
        return 1;
    }
    else if(n<0) {
        return "invalid";
    }
    else {
        for(int i=1; i<=n; i++)
        return f=f*i;
    }
    printf("%d", f);
}