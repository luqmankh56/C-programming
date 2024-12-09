#include <stdio.h>

void findDivisors(int *num) {
    printf("Divisors are: ", *num);
    for (int i = 1; i <= *num; i++) {
        if (*num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num1, num2, product;
    int *ptr;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    product = num1 * num2;


    ptr = &product;
    findDivisors(ptr);

    return 0;
}
