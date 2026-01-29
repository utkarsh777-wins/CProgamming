#include <stdio.h>

int main() {
    // input
    int num;
    int count;
    printf("enter your number and its count seperated by comma ");
    scanf("%d,%d", &num, &count);

    // loop
    for(num; num <= count; num = num+1) {
        printf("%d \n", num);
    }

    return 0;
}