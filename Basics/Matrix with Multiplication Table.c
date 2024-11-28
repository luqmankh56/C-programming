#include <stdio.h>
int main(){
	
    int size;

    printf("Enter size of matrix: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++){
        printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}
