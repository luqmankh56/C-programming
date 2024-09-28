#include<stdio.h>
int main(){
	int a, b, c;
	int formula;
	
	printf("Enter number a: ");
	scanf("%d", &a);
	
	printf("Enter number b: ");
	scanf("%d", &b);
	
	printf("Enter number c: ");
	scanf("%d", &c);
	
	formula = (a + b + c);
	
	printf("Answer = %d", formula * formula);
	
	return 0;
}