#include <stdio.h>
int main(){
	
    int num, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++){
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num){
        printf("It is Perfect Number.");
    } else {
        printf("It is not Perfect Number.");
    }

    return 0;
}
