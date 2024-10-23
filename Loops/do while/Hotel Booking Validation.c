//Author: Luqman Khan
#include <stdio.h>
int main(){
	
    int nights;

    do {
        printf("Enter the number of nights (1-5): ");
        scanf("%d", &nights);
        
    } while (nights < 1 || nights > 5);

    printf("You have booked %d nights.\n", nights);
    return 0;
}
