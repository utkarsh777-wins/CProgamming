#include <stdio.h>

int main() {

    // WEIGHT CONVERTER PROGRAM 

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion  Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    //error handling using goto 
    invalid_choice:
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    //condtionals
    if(choice == 0) {

        // Kilograms to Pounds
        printf("Enter weight in Kilogram: ");
        scanf("%f", &kilograms);

        pounds = kilograms * 2.20462;
        printf("\n%.2f kilograms is equal to %.2f pounnds\n", kilograms, pounds);

    } else if(choice == 1) {

        // Pounds to Kilograms 
        printf("Enter weight in Pounds: ");
        scanf("%f", &pounds);

        kilograms = pounds / 2.20462;
        printf("\n%.2f pounds is  equal to %.2f kilograms\n", pounds, kilograms);

    } else {

        printf("\nInvalid choice! Please enter 1 or 2\n");

        //regressing to ask for input again 
        goto invalid_choice; 
    }

    return 0;
}