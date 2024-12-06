//Author: Luqman Khan
#include <stdio.h>

int main() {
    float distance, time, velocity; 
	 
    float *pDistance = &distance;   
    float *pTime = &time;     


    printf("Enter distance (in meters): ");
    scanf("%f", pDistance);


    printf("Enter time (in seconds): ");
    scanf("%f", pTime);

    velocity = *pDistance / *pTime;

    printf("Velocity is %.2f meters per second.\n", velocity);

    return 0;
}
