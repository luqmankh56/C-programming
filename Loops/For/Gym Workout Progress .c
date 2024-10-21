//Author: Luqman Khan
#include <stdio.h>
int main(){
	
    int days = 7;
    int workout, total = 0, max_Minutes = 0;
    int day_With_MaxWork = 0;

    for (int i = 1; i <= days; i++){
        printf("Enter the workout minutes for day %d: ", i);
        scanf("%d", &workout);

        total += workout;
        
        if (workout > max_Minutes){
            max_Minutes = workout;
            day_With_MaxWork = i;
        }
    }

    float averageMinutes = (float)total / days;

    printf("\nTotal workout time for week: %d minutes\n", total);
    printf("Average workout time per day: %.2f minutes\n", averageMinutes);
    printf("Day %d had the longest workout with %d minutes.\n", day_With_MaxWork, max_Minutes);

    return 0;
}
