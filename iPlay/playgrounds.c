#include <stdio.h>
int main() {
    // double b = 5 & 3 && 4 || 5 | 6;
    // int b = 5 + 7 * 4 - 9  * (3,2);
    // printf("%lf", b);
    // printf("%d", b);
    int a = -1; int b = 4; int c = 1; int d;
    d = ++a && ++b || ++c;
    printf("%d, %d, %d, %d\n", a, b, c, d);
    
    return 0;
}