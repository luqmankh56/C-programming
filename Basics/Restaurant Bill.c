#include<stdio.h>
int main(){
	
	int meal;
	
	printf("Enter meal price: ");
	scanf("%d", &meal);
	
	float tip = 10.0 / 100.0 * meal;
	float totalBill = meal + tip;
	
	printf("Meal cost: %d\n", meal);
	printf("Tip cost: %.2f\n", tip);
	printf("Total Bill: %.2f", totalBill);
	
	return 0;
	 
}