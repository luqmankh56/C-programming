#include <stdio.h>
int main(){
	
    int months, customers = 3, loan_amount, monthly_payment;

    for (int i = 1; i <= customers; i++){
        printf("\nCustomer %d:\n", i);
        printf("Enter loan amount: ");
        scanf("%d", &loan_amount);
        printf("Enter number of months for repayment: ");
        scanf("%d", &months);

        monthly_payment = loan_amount / months;
        printf("Monthly payment for Customer %d: %d\n", i, monthly_payment);
    }

    return 0;
}
