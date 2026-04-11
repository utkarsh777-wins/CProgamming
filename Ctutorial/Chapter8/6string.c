#include <stdio.h>

int main() {
    //the actual way to get this done 
    char fullName[100];
    fgets(fullName, sizeof(fullName), stdin);

    printf("%s\n", fullName);

    return 0;
}