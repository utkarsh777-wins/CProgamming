#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char firstStr[MAX_LEN] = "Sun";
    char secondStr[] = "flower";

    strcat(firstStr, secondStr);
    puts(firstStr);

    return 0;
}