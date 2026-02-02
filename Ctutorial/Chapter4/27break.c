#include <stdio.h>

int main() {
    int i = 1;
    while(i <= 10) {
        if(i == 8) {
            break;
        }
        printf("%d\n", i);
        i++;
    }
    printf("END");
    return 0;
}