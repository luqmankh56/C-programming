//Author: Luqma Khan
#include <stdio.h>
int main(){
	
    int num;
    int *p = &num;

    printf("Enter a number: ");
    scanf("%d", p);   

    int square = (*p) * (*p); 

    printf("Square of %d = %d.\n", *p, square);

    return 0;
}
