#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);


int main() {
    
    //ATM PROGRAM

    int choice = 0;
    float balance = 0.0f;
    
    // intro
    printf("[WELCOME TO SHADY ATM]");
    printf("\n");

    // main loop
    
    do {

        printf("\nSelect an option: \n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        // examining the user choice

        switch(choice) {

            case 1:
            checkBalance(balance);
            break;

            case 2:
            balance = balance + deposit();
            break;

            case 3:
            balance -= withdraw(balance);
            break;

            case 4:
            printf("\nDear customer, thank you for using SHADY ATM ^^\n");
            break;

            default:
            printf("\nInvalid Choice! Please select 1 - 4\n");
        }
    } while (choice != 4);
    
    return 0;
}

void checkBalance(float balance) {
    
    //displays the current balance
    printf("Your current balance is: $%.2f\n", balance);

}
float deposit() {

    float amount = 0.0f;
    
    printf("\nEnter amount to deposit: $");
    scanf("%f", &amount);

    if(amount < 0) {

        printf("Invalid amount!!\n");
        return 0.0f;

    } else {

        printf("Successfully deposited $%.2f to your bank account\n", amount);
        return amount;
        
    }
}
float withdraw(float balance) {
    
    float amount = 0.0f;

    printf("Enter amount to withdraw: $");
    scanf("%f", &amount);
    printf("\n");

    if(amount < 0) {

        printf("Invalid amount!!\n");
        return 0.0f;

    } else if(amount > balance) {

        printf("Insufficient Balance!! Your balance is: $%.2f\n", balance);
        return 0.0f;

    } else {

        printf("Successfully withdrew %.2f from you bank account\n", amount);
        return amount;

    }
}