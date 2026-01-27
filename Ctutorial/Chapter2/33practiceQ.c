#include <stdio.h>

int main() {
    // WAP to check if the given char is a digit or not
    // declaring the empty char container
    char x;

    // filling the empty char container with scanf
    printf("Enter your character ");
    scanf("%c", &x);
    
    // char container can only hold one character
    // it'll be in between 0-9
    // the extra digits wait in queu to be called again 
    // hence if any digit is entered it'll return 1(true) and if anything else is entered it'll return 0(false)
    // this should output 0(if xis not a digit and 1 if x is a digit)
    // printf("%d", x >= '0' && x < '10');
    // warning: multi-character character constant [-Wmultichar]
    printf("%d", x >= '0' && x <= '9');

    return 0;
}