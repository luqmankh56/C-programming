#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    printf("Enter rows and columns of matrix1: ");
    scanf("%d%d", &row1, &col1);
    printf("Enter rows and columns of matrix2: ");
    scanf("%d%d", &row2, &col2);

    int matrix1[row1][col1], matrix2[row2][col2], result[row1][col2];

    printf("Enter elements of matrix1:\n");
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col1; j++){
        scanf("%d", (*(matrix1 + i) + j));
        }
    }
    printf("Enter elements of matrix2:\n");
    for (int i = 0; i < row2; i++){
        for (int j = 0; j < col2; j++){
        scanf("%d", (*(matrix2 + i) + j));
        }
    }
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
        *(*(result + i) + j) = 0;
        for (int k = 0; k < col1; k++) {
            *(*(result + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
        }
    }

    printf("Product Matrix:\n");
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
        printf("%d ", *(*(result + i) + j));
        }
        printf("\n");
    }

    return 0;
}
