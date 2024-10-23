//Author: Luqman Khan
#include <stdio.h>
int main(){
	
    float saved, total_Saved = 0, savings_Goal = 1000;

    do {
        printf("\nEnter the amount saved this week: ");
        scanf("%f", &saved);
        total_Saved += saved;
        
        printf("Total saved: %.2f / %.2f\n", total_Saved, savings_Goal);
    } while (total_Saved < savings_Goal);

    printf("\n\nCongratulations! You achieve your goal.", savings_Goal);
    return 0;
}
