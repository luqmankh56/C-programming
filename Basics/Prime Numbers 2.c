#include <stdio.h>
int isPrime(int num){
	
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers less than %d: ", num);
    
    for (int i = 2; i < num; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
