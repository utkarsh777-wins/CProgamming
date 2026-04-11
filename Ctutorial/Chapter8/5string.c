#include <stdio.h>

int main() {
    //works but is always dangerous
    char fullName[50];

    gets(fullName);
    puts(fullName);

    return 0;
}