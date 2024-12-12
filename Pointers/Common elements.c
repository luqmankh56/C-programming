#include <stdio.h>
int main(){
	
    int array_1[30], array_2[30], common[100];
    int size_1, size_2, *ptr1, *ptr2, *ptrCommon = common;
    
    printf("Enter size of array1: ");
    scanf("%d", &size_1);
    
    printf("Enter elements of array1: ");
    for (ptr1 = array_1; ptr1 < array_1 + size_1; ptr1++){
        scanf("%d", ptr1);
    }
    
    printf("Enter size of array2: ");
    scanf("%d", &size_2);
    printf("Enter elements of array2: ");
    for (ptr2 = array_2; ptr2 < array_2 + size_2; ptr2++){
        scanf("%d", ptr2);
    }
    
    
    for (ptr1 = array_1; ptr1 < array_1 + size_1; ptr1++){
        for (ptr2 = array_2; ptr2 < array_2 + size_2; ptr2++){
            if (*ptr1 == *ptr2){
                *ptrCommon = *ptr1;
                ptrCommon++; 
                break;
            }
        }
    }
    
    printf("Common elements: ");
    for (ptr2 = common; ptr2 < ptrCommon; ptr2++){
        printf("%d ", *ptr2);
    }
    
    return 0;
}
