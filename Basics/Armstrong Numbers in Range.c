#include <stdio.h>

int Armstrong(int num){
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    while (num != 0){
        digits++;
        num /= 10;
    }

    num = originalNum;
    
    while (num != 0){
        int digit = num % 10;
        sum += pow (digit, digits);
        num /= 10;
    }

    return sum == originalNum;
} 

int main(){
    int start, last;

    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter last number: ");
    scanf("%d", &last);

    printf("Armstrong numbers between range: ");

    for (int i = start; i <= last; i++) {
        if (Armstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
