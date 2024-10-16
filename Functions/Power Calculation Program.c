//Author: Luqman Khan
#include <stdio.h>

int calculate_power(int base, int exponent){
    int result = 1;
    
    for(int i = 1; i <= exponent; i++){
        result *= base;
    }
    
    return result;
}

int main(){
    int base, exponent;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    int power = calculate_power(base, exponent);
    printf("%d raised to the power of %d is : %d\n", base, exponent, power);
    
    return 0;
}
