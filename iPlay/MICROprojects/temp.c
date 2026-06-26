#include <stdio.h>

int main() {

    // TEMPERATURE CONVERSION PROGRAM 

    char choice = '\0';
    float farenheit = 0.0f;
    float celsius = 0.0f;

    // init 
    printf("Temperature Conversion Program\n");
    printf("C. Cesius to Farenheit\n");
    printf("F. Farenheit to Celsius\n");

    printf("Specify the unit of Temperature (C/c or F/f): ");
    // regression in case of invalid character
    invalid_character:
    scanf(" %c", &choice);

    //conditions
    if(choice == 'c' || choice == 'C') {

        // C to F
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &celsius);
        farenheit = (celsius * 9/5) + 32;
        printf("\n%.1f Celsius is equal to %.1f Fareheit\n", celsius, farenheit);

    } else if(choice == 'f' || choice == 'F') {

        // F to C
        printf("Enter the temperature in Farenheit: ");
        scanf("%f", &farenheit);
        celsius = (farenheit - 32) * 5/9;
        printf("\n%.1f Farenheit is equal to %.1f Celsius\n", farenheit, celsius);

    } else {
        
        printf("\nInvalid Character! Please Select (C or F)\n");

        //regressing back to the input line
        goto invalid_character;

    }


    return 0;
}