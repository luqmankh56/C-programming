//Author: Luqman Khan
#include <stdio.h>
int main(){
	
    int num = 78;    
    int *p = &num;   

    *p = 50;      

    printf("Modified value of number: %d\n", num);  

    return 0;
}
