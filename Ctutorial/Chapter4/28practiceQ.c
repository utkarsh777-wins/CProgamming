// keep taking input from user until user enters an odd number
#include <stdio.h>

int main() {
    int input;
    do{
        printf("enter : ");
        scanf("%d", &input);
        printf("%d\n", input);
        if(input % 2 != 0) {
            break;
        }
    } while(1);
    printf("how odd");
    return 0;
}
