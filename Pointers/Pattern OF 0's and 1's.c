#include<stdio.h>
int main(){
	
	int range;
	
	printf("Enter range: ");
	scanf("%d", &range);
	
	int num = 1;
	int *ptr = &num;
	
	for(int i = 0; i < range; i++){
		for(int j = 0; j< range; j++){
			*ptr = (i + j) % 2;
			printf("%d", *ptr);
		}
		printf("\n");
	}
	return 0;
}