#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countVowels(char str[]) {
    int count=0;
    for(int i=0; str[i]!='\0'; i++) {
        char temp = tolower(str[i]);
        if(
            temp == 'a' ||
            temp == 'e' ||
            temp == 'i' ||
            temp == 'o' ||
            temp == 'u' 
        ) {count += 1;}
    }

    printf("%d\n", count);
}
int main() {
    //count the occurence of vowels ina string 
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    countVowels(str);

}