#include <stdio.h>
int main(){
	
    int size;
    printf("Enter size of matrix: ");
    scanf("%d", &size);

    int x = 0, y = 1, new_num;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", y);  
            new_num = x + y;
            x = y;
            y = new_num; 
        }
        printf("\n");
    }

    return 0;
}
