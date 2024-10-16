//Author: Luqman Khan
#include <stdio.h>

	int Divisors(int number){
    
    for (int i = 1; i <= number; i++){
        if (number % i == 0){
        printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){
    int number;
    
    printf("Enter integer: ");
    scanf("%d", &number);
    
    printf("Divisors of %d are: ",number);
    Divisors(number);
   
    return 0;
}
