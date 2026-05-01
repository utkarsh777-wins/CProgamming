#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // char str[50];

    // fgets(str, sizeof(str), stdin);

    // printf("%s\n", str);

    // return 0;

    // count the existence of a letter 
    char str[100];
    printf("Enter your sentencce: ");
    fgets(str, sizeof(str), stdin);

    char target;
    printf("Enter your letter: ");
    scanf(" %c", &target);


    int count = 0;
    for(int i=0; str[i]!='\0'; i++) {
        char toLow = tolower(target);
        if(target == tolower(str[i])) {
            count++;
        }
    }

    printf("the number of times %c occured: %d", target, count);

    return 0;
}