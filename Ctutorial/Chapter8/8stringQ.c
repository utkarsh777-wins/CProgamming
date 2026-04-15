#include <stdio.h>
#include <string.h>

int countLength(char arr[]);

int main() {
    char name[20] = "";
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    int count = 0;
    // for(int i=1; name[i]!='\0'; i++) {
    //     count++;
    // }

    printf("the length of %s is = %d\n", name, countLength(name));

    return 0;
}

int countLength(char arr[]) {

    int count = 0;
    for(int i=0; arr[i]!='\0'; i++) {
        count++;
    }


    return count;
}