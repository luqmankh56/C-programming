//Author: Luqman Khan
#include <stdio.h>
int main(){
	
    int array[] = {2, 3, 7, 8};
    int total = 10;
    int size = sizeof(array) / sizeof(array[0]);

    printf("Pairs that sum up to %d are:\n", total);
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++) {
            if (array[i] + array[j] == total){
            printf("(%d, %d)\n", array[i], array[j]);
            }
        }
    }

    return 0;
}
