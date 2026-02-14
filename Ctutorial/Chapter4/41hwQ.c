#include <stdio.h>
int main() {
    char star = '*';
    for(int j=1; j<=4; j++) {
        for(int i=1; i<=5; i++) {
            printf(" %c", star);
        }
        printf("\n");
    }
    return 0;
}