#include <stdio.h>
#include <string.h>

int main() {
    //shopping cart program 


    // initialising the variables
    char item_name[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    // taking user input
    printf("What item would you like to purchase?: ");
    fgets(item_name, sizeof(item_name), stdin);
    (strlen(item_name) - 1); 
    // printf("%s", item_name);
    // dealing with the input buffer
    item_name[strlen(item_name) - 1] = '\0';

    printf("What is the price of the item?: ");
    scanf("%f", &price);
    
    printf("How many of these items do you want?: ");
    scanf("%d", &quantity);

    // calculating the total
    total = price * quantity;

    // formatting the output
    if(quantity < 1) {printf("Nothing in your cart, would you like to order something?\n");}
    else if(quantity == 1) {printf("You've bought a %s .\n", item_name);}
    else {printf("You've bought %d x %s(s).\n", quantity, item_name);}
  
    printf("The total is: %c%.2f\n", currency, total);


    return 0;
}