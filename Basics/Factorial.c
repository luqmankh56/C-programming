#include <stdio.h>
int main(){
	
    int num, factorial = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Its negative number.");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("Factorial of %d is %d\n", num, factorial);
    }

    return 0;
}
