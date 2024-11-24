#include <stdio.h>
int main(){
	
    int start, last, sum = 0;
    
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &last);

    for (int i = start; i <= last; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("Sum of odd numbers in range: %d\n",sum);

    return 0;
}
