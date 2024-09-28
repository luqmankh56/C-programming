#include<stdio.h>
int main(){

	int kg;
	float meter;
	
	printf("Enter Kilogram : ");
	scanf("%d", &kg);
	
	printf("Enter Height : ");
	scanf("%f", &meter);
	
	float result = kg / (meter * meter);
	

	printf("BMI Calculation : %.2f", result); 
	
	
	return 0;
}