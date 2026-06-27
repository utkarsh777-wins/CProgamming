#include <stdio.h>

int main() {
    
    // CALCULATOR PROGRAM

    char op = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("\n");

    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c", &op);   // clear '\n' from input buffer
    printf("\n");

    printf("Enter the  second number: ");
    scanf("%lf", &num2);
    printf("\n");

    
    switch(op) {

        case '+':
        result = num1 + num2; 
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        //zero division error handling
        if (num2 == 0) {
            printf("You cannot divide by zero\n");
            return 0;
        } else {
            result = num1 / num2;
        }
        break;

        default:
        printf("Invalid operator\n");
        return 0;

    }

    printf("Result = %.4f\n", result);

    return 0;
}