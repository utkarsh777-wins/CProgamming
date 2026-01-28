// WAP  to find if a character entered by user is in upper case or not
// ASCI comes into play
#include <stdio.h>
 int main() {
    char ch;
    printf("enter your chharacter : ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
      printf("Upper Case");
    }
    else if(ch >= 'a' && ch <= 'z') {
      printf("Lower Case");
    }
    else {
      printf("NOT ENGLISH");
    }

    return 0;
 }