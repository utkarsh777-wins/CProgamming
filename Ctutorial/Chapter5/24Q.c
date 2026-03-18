// #include <stdio.h>

// void pN(int n);
// int main() {
//      int n = 11;
//      pN(n);
// }

// void pN(int n) {
//     if(n==0) {return;}
//     pN(n-1);
//     printf("%d\t", n);
// }

// #include <stdio.h>

// int sumN();

// int main() {
//     int n;
// }

// int sumN() {
//     if(n==0) {return;}

// }

#include <stdio.h>

int pew(int n, int m);

int main() {
    int n=5, m= 3;
    printf("%d", pew(n, m));
}

int pew(int n, int m) {
    int count = n;
    if(m==0) {return 1;}
    return n * pew(n, m-1);
}