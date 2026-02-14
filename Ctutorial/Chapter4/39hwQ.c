 #include <stdio.h>
 int main() {
    char star = '*';

    for(int i=1; i<=5; i++){
        printf(" %c", star);
    }
    printf("\n");
    for(int i=1; i<=5; i++){
        printf(" %c", star);   
    }
    printf("\n");
    for(int i=1; i<=5; i++){
        printf(" %c", star);
    }
    printf("\n");
    for(int i=1; i<=5; i++){
        printf(" %c", star);   
    }
    printf("\n");

// made this work manually but the use for loop or functions is to reduce redundancy so this one is a failed sample 
// this is probably what is called one dimensional thinking 
// i need another variablle
    return 0;
 }