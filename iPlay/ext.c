#include <stdio.h>
#include "extt.c"

int x=30;
int main() {

    test(x);
    printf("%d",  x);
    x=x+10;
}