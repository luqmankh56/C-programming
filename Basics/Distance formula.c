#include <stdio.h>
int main(){
    
	int x1, x2, y1, y2;

	printf("Enter X1 : ");
	scanf("%d", &x1);
	
	printf("Enter X2 : ");
	scanf("%d", &x2);
	
	printf("Enter Y1 : ");
	scanf("%d", &y1);
	
	printf("Enter Y2 : ");
	scanf("%d", &y2);
	
	int xDiff = x2 - x1; 
	int yDiff = y2 - y1;  
	int xDiffSquared = xDiff * xDiff;  
	int yDiffSquared = yDiff * yDiff;  
	float distance = sqrt(xDiffSquared + yDiffSquared); 
	
	printf("Distance between the two points is: %f\n", distance);
	
	return 0;
}