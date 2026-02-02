#include <stdio.h>

int main() {
    int x = 1;
    while(x <= 10) {
        printf("%d\n", x);
        x++;
        // while(x % 2 == 0) {     //nesting while
        //     printf("Even While\n");
        //     x++;
        // };
        // first nest works but the output is a bit weird
        // while(x % 2 != 0) { this goes wrong idk why
        //     printf("Odd While\n");
        //     x++;
        // }
// 1
// Even While
// 3
// Even While
// 5
// Even While
// 7
// Even While
// 9
// Even While

    }
    return 0;
}