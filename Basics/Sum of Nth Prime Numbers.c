#include <stdio.h>

int isPrime(int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0) {
            return 0; 
        }
    }

}
int main(){
    int N, count = 0, num = 2, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("First %d prime numbers: ", N);

    while (count < N) {
        if (isPrime(num)) {
            printf("%d ", num);
            sum += num;
            count++;
        }
        num++;
    }

    printf("\nSum: %d",sum);

    return 0;
}
