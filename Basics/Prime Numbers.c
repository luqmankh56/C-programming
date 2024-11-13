#include <stdio.h>
int isPrime(int num){
	
    if (num <= 1)
        return 0;
        
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int start, last;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the last number: ");
    scanf("%d", &last);

    int primes[20];
    int count = 0;

    for (int i = start; i <= last; i++) {
        if (isPrime(i)) {
            primes[count] = i;
            count++;
        }
    }
    printf("Prime numbers between %d and %d: ", start, last);
    for (int i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }

    return 0;
}
