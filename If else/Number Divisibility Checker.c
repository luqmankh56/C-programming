//Author: Luqman Khan
#include <stdio.h>
int main(){
    
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is divisible by 2.\n", number);
    } else {
        printf("%d is not divisible by 2.\n", number);
    }

    if (number % 3 == 0) {
        printf("%d is divisible by 3.\n", number);
    } else {
        printf("%d is not divisible by 3.\n", number);
    }

    if (number % 5 == 0) {
        printf("%d is divisible by 5.\n", number);
    } else {
        printf("%d is not divisible by 5.\n", number);
    }

    return 0;
}
