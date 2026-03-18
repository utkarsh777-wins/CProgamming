#include <stdio.h>

int maxNum(int *pX, int *pY);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int s = maxNum(&m, &n);
    printf("%d", s);

    return 0;
}

int maxNum(int *pX, int *pY)  {
    int a = *pX;
    int b = *pY;
    // if(a>b){return a;} else {return b;}
    int max = (a>b)?  a :  b;
    return max;

}