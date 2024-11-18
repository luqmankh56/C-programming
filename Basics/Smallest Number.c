#include <stdio.h>
int main(){
	
    int array[30], num, i, smallest;

    printf("Number of elements: ");
    scanf("%d", &num);

    printf("Enter elements: ");
    for (i = 0; i < num; i++){
        scanf("%d", &array[i]);
    }

    smallest = array[0];

    for (i = 1; i < num; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    printf("Smallest: %d\n", smallest);

    return 0;
}
