#include <stdio.h>
int main(){
	
    int rows, cols;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    int largestElements[rows];
    
    printf("Enter elements:\n");
    for (int i = 0; i < rows;i++){
        for (int j = 0; j < cols;j++){
        scanf("%d", (*(matrix + i) + j));
        }
    }
    
    printf("Matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }

    
    for (int i = 0; i < rows; i++){
        int max = *(*(matrix + i));
        for (int j = 1; j < cols; j++){
        	if (*(*(matrix + i) + j) > max){
            max = *(*(matrix + i) + j);
            }
        }
        *(largestElements + i) = max;
    }
    
    printf("Largest element in rows:\n");
    for (int i = 0; i < rows; i++){
        printf("%d\n", *(largestElements + i));
    }
    
    return 0;
}