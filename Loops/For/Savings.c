#include <stdio.h>
int main(){
	
    int savings, total_savings = 0, average_savings;

    for (int i = 0; i < 7; i++) {
        printf("Enter savings for day %d: ", i + 1);
        scanf("%d", &savings);
        total_savings += savings;
    }

    average_savings = total_savings / 7;

    printf("\n\nTotal savings for week: %d\n", total_savings);
    printf("Average of daily savings: %d\n", average_savings);

    return 0;
}
