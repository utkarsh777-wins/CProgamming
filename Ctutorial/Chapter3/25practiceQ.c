// WAP to check if the given numeber is a natural number
#include <stdio.h>
int main() {
    int num;
    printf("enter your number");
    scanf("%d", &num);

    if(num >= 1) {
        printf("Natural Number");
    }
    else if(num >= 0) {
        printf("Whole Number");
    }
    else if(num < 0 && num >= 0) {
        printf("Integer");
    }
    else {
        printf("Real Numbers");
    }
    // i think we can add imagnary in else 
    // but before that this isn't working properly for integers //fix that      
}