#include <stdio.h>
int main(){
	
    float distance, time;

    printf("Enter distance in meters: ");
    scanf("%f", &distance);

    printf("Enter time in seconds: ");
    scanf("%f", &time);

    float speed = distance / time;

   
    printf("Speed is %.2f meters per second.", speed);

    return 0;
}

