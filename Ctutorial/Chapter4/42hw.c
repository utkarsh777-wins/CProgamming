#include <stdio.h>

int main() {
    char star = '*';
    int i = 1;
    do{
        int j = 1;
        while(j <= 5) {
            printf(" %c", star);
            j++;
        }
        printf("\n");
        i++;
    } while(i<=4);

    return 0;
}


// alright got this question done