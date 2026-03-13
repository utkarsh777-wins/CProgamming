#include <stdio.h>

int main() {
    int num, prev = 0, current = 1;
    printf("Enter : ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {
        int next = prev+current;
        printf("%d\t", next);
        prev = current;
        current = next;
    }
    return 0;
}