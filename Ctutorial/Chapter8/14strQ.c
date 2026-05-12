#include <stdio.h>
#include <string.h>

//salting 
// int main() {

//     char pass[100];
//     char salt[] = "123";

//     scanf(" %[^\n]", &pass);

//     strcat(pass, salt);

//     puts(pass);
// }

void salting(char pass[]) {
    char newPass[200];
    char salt[] = "xY1";

    strcpy(newPass, pass);
    strcat(newPass, salt);

    puts(newPass);
}
int main() {
    char str[100];
    scanf(" %[^\n]", &str);

    salting(str);

    return 0;
}

//explore strncat