#include <stdio.h>
int main(){
	
    int array[] = {4, 1, 3};
    int length = 3,temp;

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
