#include <stdio.h>

int main() {

    // int x; int y = x; x =6;
    // printf("%d", y);
    // 32759 hmm why do we get this while reversing it
    // check it
// printf("%d", 9 < x < 100); spams 1 --so sorta wrong

    // 28Q
    int x;
    printf("enter your number ");
    scanf("%d", &x);

    printf("%d", 9 < x && x < 100);
    return 0;
}