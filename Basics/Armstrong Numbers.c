#include <stdio.h>
#include <math.h>

void Armstrong_num(int number){
	
    int org_number = number;
    int sum = 0, digits = 0;

    int temp = number;
    while (temp != 0){
        temp /= 10;
        digits++;
    }

    temp = number;
    while (temp != 0){
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    if (sum == org_number){
        printf("It is an Armstrong Number\n");
    } else {
        printf("It is not an Armstrong Number\n");
    }
}

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    Armstrong_num(num);
    return 0;
}
