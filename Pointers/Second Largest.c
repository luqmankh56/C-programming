#include <stdio.h>
int main(){
	
    int n = 5; 
    int arr[] = {8, 3, 5, 1, 9};
    int *largest, *secondLargest;
    
    largest = &arr[0];
    secondLargest = &arr[0];

    for (int i = 1; i < n; i++){
        if (*(arr + i) > *largest){
            secondLargest = largest;
            largest = arr + i;
        } else if (*(arr + i) > *secondLargest && *(arr + i) != *largest) {
            secondLargest = arr + i;
        }
    }

    printf("Second largest number is: %d\n", *secondLargest);

    return 0;
}
