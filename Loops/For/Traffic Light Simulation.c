//Author: Luqman Khan
#include <stdio.h>
#include <unistd.h> 
int main(){
	
    while (1) { 
        printf("Red light for 15 seconds\n");
        sleep(15);  
        
        printf("Yellow light for 5 seconds\n");
        sleep(5); 
        
        printf("Green light for 15 seconds\n");
        sleep(15); 
    }

    return 0;
}
