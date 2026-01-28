#include <stdio.h>

int main() {
    int age;
    printf("enter age:");
    scanf("%d", &age);

    if(age >= 18) {
        printf("Big \n");
    }
    else if(age > 13 && age < 18) {
        printf("Small \n");
    }
    else{
        printf("Microsoft\n");
    }
    
    printf("bye-bye");
    return 0;
}