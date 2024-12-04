//Author: Luqman Khan
#include <stdio.h>
int main(){
	
    int a = 18, b = 13;   
    int *p1 = &a;       
    int *p2 = &b;       

    int sum = *p1 + *p2; 

    printf("Sum = %d + %d = %d\n", *p1, *p2, sum);

    return 0;
}
