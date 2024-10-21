//Author: Luqman Khan
#include <stdio.h>
int main(){
	
    int stops, passengers, total_Passengers = 0, maxPassengers = 0, stopWithMax = 0;

    printf("Enter number of stops: ");
    scanf("%d", &stops);

    for (int i = 1; i <= stops; i++){
        printf("Passengers boarding at stop %d: ", i);
        scanf("%d", &passengers);

        total_Passengers += passengers;

        if (passengers > maxPassengers) {
            maxPassengers = passengers;
            stopWithMax = i;
        }
    }

    printf("\nTotal number of passengers: %d\n", total_Passengers);
    printf("Highest number of passengers from %d with %d passengers.\n", stopWithMax, maxPassengers);

    return 0;
}
