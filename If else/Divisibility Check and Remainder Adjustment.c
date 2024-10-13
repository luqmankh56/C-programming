//Author: Luqman Khan
#include <stdio.h>
int main(){
    
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int remainder = num1 % num2;

    if (remainder == 0){
        printf("%d is divisible by %d.\n", num1, num2);
    } else {
        printf("Remainder: %d\n", remainder);
        printf("Add %d to make it divisible.\n", num2 - remainder);
    }

    return 0;
}
