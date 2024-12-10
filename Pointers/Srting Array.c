#include <stdio.h>
int main(){
	
    int array[] = {8, 5, 2}; 
    int length = 3, temp;
    int *ptr1, *ptr2; 


    for (ptr1 = array; ptr1 < array + length; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 < array + length; ptr2++) {
            if (*ptr1 > *ptr2) {
                
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
    
    printf("Sorted Array: ");
    for (ptr1 = array; ptr1 < array + length; ptr1++) {
        printf("%d ", *ptr1);
    }

    return 0;
}
