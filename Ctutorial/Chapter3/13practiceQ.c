#include <stdio.h>

int main() {
    // wap to check if a student passed or failed 
    // > 30 is pass

    // taking in user input 
    int marks;
    printf("enter your marks ");
    scanf("%d", &marks);

    // logic
    if(marks <= 30) {
        printf("fail \n");
    }
    else {
        printf("pass \n");
    }

    return 0;
}