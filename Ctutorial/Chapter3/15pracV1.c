#include <stdio.h>

int main() {
    int marks;
    printf("enter your marks : ");
    scanf("%d", &marks);
// nesting a grading system in using if-else & else if and && logical operators --will only give true if both the statements are true 
// if will only function if the condition is true 
    if(marks > 30) {
        printf("pass \n");       
        if( marks > 30 && marks < 50) {         
            printf("D \n");
        }
        else if(marks > 50 && marks < 60) {
            printf("C \n");
        }
        else if(marks > 60 && marks < 70) {
            printf("B \n");
        }
        else if(marks > 70 && marks <80) {
            printf("A \n");
        }
        else if(marks > 80 && marks < 90) {
            printf("A+ \n");
        }
        else if(marks > 90) {
            printf("O \n");
        }
        
    }
    else {
        printf("fail \n");
        printf("F");
    }
    
    return 0;
}