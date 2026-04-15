#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "utkarsh";
    // fgets(name, sizeof(name), stdin);
    int length = strlen(name);

    printf("%d\n", length);

    return 0;
}