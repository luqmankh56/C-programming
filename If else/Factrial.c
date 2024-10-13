//Luqman Khan
#include <stdio.h>
int main(){
    
    int number;
    int factorial = 1; 
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Eenter non-negative integer.\n");
        return 1; 
    }
    
    for (int i = 1; i <= number; i++) {
        factorial *= i; 
    }

    printf("Factorial of %d is: %d\n", number, factorial);

    return 0;
}
