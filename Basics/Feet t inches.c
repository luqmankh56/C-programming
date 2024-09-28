#include<stdio.h>
int main(){

	int feet, inches;
	printf("Enter Feet : ");
	scanf("%d", &feet);

	inches = feet * 12;

	printf("%d Feet = %d Inches.", feet , inches);

	return 0;
}