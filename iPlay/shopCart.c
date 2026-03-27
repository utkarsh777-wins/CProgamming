#include <stdio.h>
#include <string.h>

int main() {
    // initialising the variables
    char item_name[50];
    float price;
    int quantity;
    char currency = '$';

    // taking user input
    printf("What item would you like to purchase?: ");
    fgets(item_name, sizeof(item_name), stdin);
    (strlen(item_name) - 1); 

    // printf("%s", item_name);
    printf("What is the price of the item?: ");
    scanf("%f", &price);
    printf("How many of these items do you want?: ");
    scanf("%d", &quantity);

    // total price of the item(s) pushased
    float total_price = price * quantity;

    // outputs
    printf("%f\n", total_price);
    if(quantity < 1) {printf("Nothing in your cart, would you like to order something?\n");}
    else if(quantity == 1) {printf("You've bought a %s .\n", item_name);}
    else {printf("You've bought %d x %s(s).\n", quantity, item_name);}
}