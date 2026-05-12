// take a string input from user using %c
#include <stdio.h>
#include <string.h>

// char* takeInput(char str[]) {
//     char temp;
//     int i=0;

//     while(temp != '\n') {
//         scanf("%c", &temp);
//         str[i] = temp;
//         i++;

//     }
//     str[i] = '\0';

//     return str;

// }

char* takeInput(char str[]) {
    char temp;
    int i=0;

    do {
        scanf("%c", &temp);
        if(temp!='\n') {
            str[i] = temp;
            i++;
        }
    } while(temp!='\n');
    str[i] = '\0';

    return str;
}
int main() {
    char str[100];

    takeInput(str);

    puts(str);

}