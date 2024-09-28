#include<stdio.h>
int main(){
	
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	
	int answer = sqrt(num);
	
	printf("Square root of %d is %d.", num, answer);
	
	return 0;
}