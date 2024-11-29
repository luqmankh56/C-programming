#include <stdio.h>
int main(){
	
    int size, sum = 0;

    printf("Enter size of matrix: ");
    scanf("%d", &size);

    
    int matrix[size][size];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
