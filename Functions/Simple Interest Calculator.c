//Author: Luqman Khan
#include <stdio.h>

float Interest(float amount, float rate, float years){
    return (amount * rate * years) / 100; 
}

int main() {
    float amount, rate, years, interest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &amount);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter years: ");
    scanf("%f", &years);

    interest = Interest(amount, rate, years);

    printf("The simple interest is: %.2f\n", interest);

    return 0;
}
