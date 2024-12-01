#include <stdio.h>
int main(){
	
    int num1, num2;
    int product, sum = 0;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    product = num1 * num2;

    printf("The product of two numbers is: %d\n",product);

    while (product > 0) {
        sum += product % 10; 
        product /= 10;  
    }

    printf("The sum of the digits of the product is: %d\n", sum);

    return 0;
}
