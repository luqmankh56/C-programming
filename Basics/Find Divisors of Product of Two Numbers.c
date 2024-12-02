#include <stdio.h>
int main(){
	
    int num1, num2, product;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    product = num1 * num2;

    printf("\nDivisors are:\n");
    for (int i = 1; i <= product; i++){
        if (product % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}
