//Author: Luqman Khan
#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int amount;
    int available_balance = 50000;
    bool have_sufficent_amount = true;
    
    do {
        printf("Please Enter Amount to withdraw: ");
        scanf("%d", &amount);
        
        if (amount % 500 == 0) {
            if (amount <= available_balance) {
                available_balance -= amount;
                have_sufficent_amount = true;
                printf("\nYou withdrew: %d$\n", amount);
                printf("Available balance after withdrawal is %d$", available_balance);
            } else {
                have_sufficent_amount = false;
                printf("\nYou don't have sufficient amount to withdraw!\n");
                printf("Your avaiable balance is: %d$\n\n", available_balance);
            }
        } else {
            printf("Please enter amount which must be multiple of 500.\n\n");
        } 
        
    } while (amount % 500 != 0 || have_sufficent_amount == false);
    
    printf("\n\nThanks for using our ATM.");
    
    return 0;
}