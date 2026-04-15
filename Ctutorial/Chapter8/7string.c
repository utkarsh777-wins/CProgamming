#include <stdio.h>

int main() {

    char *changingStr = "Hellow HOllow";
    changingStr = "Heyaaaa";

    char voidStr[]  = "Hellow mellow";
    // voidStr[] = "hello"; //can't be changed
    puts(changingStr);
    printf("\n");
    puts(voidStr);
}