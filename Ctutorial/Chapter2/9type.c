#include <stdio.h>

int main() {
    // printf("%d", 2 / 3); //o/p 0 since the output is 0 point something anf the  container is integer type 
    printf("%f", 2.0 / 3);
    // so unless you add this .0 at the end the value remains 0
    // Hence, when we'll need exact value we'll use float otherwise we'll go with integer
    return 0;
}