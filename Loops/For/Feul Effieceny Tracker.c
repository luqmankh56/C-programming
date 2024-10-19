//Authior: Luqman Khan
#include <stdio.h>
int main(){
	
    float consumed, liters, totalLiters = 0;
    int refueling;

    printf("Enter feul consumed (km per liter): ");
    scanf("%f", &consumed);
    printf("Enter number of refueling events: ");
    scanf("%d", &refueling);

    for (int i = 1; i <= refueling; i++){
        printf("Enter liters of refueling %d: ", i);
        scanf("%f", &liters);
        totalLiters += liters;
    }

    float totalKm = totalLiters * consumed;
    printf("You can drive %.2f kilometers.\n", totalKm);
    
    return 0;
}
