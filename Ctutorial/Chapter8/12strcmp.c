#include <stdio.h>
#include <string.h>

int main() {
    char firstStr[] = "inf";
    char secondStr[] = "inf";

    int result = strcmp(firstStr, secondStr);

    printf("%d\n", result);

    return 0;
}