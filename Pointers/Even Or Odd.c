//Author: Luqman Khan
#include <stdio.h>
int main(){
	
    int number;
    int *p = &number; 

    printf("Enter a number: ");
    scanf("%d", p); 

    if (*p % 2 == 0) { 
        printf("%d is even.\n", *p);
    } else {
        printf("%d is odd.\n", *p);
    }

    return 0;
}
