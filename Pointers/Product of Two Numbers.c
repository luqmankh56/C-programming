#include <stdio.h>
int main(){
	
    int a = 4, b = 9;     
    int *p1 = &a;    
    int *p2 = &b;  

    int product = (*p1) * (*p2); 

    printf("Product = %d x %d = %d\n", *p1, *p2, product);

    return 0;
}
