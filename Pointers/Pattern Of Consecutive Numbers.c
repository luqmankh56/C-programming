#include<stdio.h>
int main(){
	
	int range;
	
	printf("Enter range: ");
	scanf("%d", &range);
	
	int num = 1;
	int *ptr = &num;
	
	for(int i = 0; i < range; i++){
		for(int j = 0; j < range; j++){
			printf("%d ", *ptr);
			(*ptr)++;
		}
		printf("\n");
	}
	return 0;
}