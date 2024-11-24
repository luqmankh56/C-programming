#include <stdio.h>
int main(){
	
    int position, first = 0, second = 1, new_num = 0;

    printf("Enter the position: ");
    scanf("%d", &position);

    if (position <= 0) {
        printf("Position must be a positive integer.\n");
    } else if (position == 1) {
        printf("Fibonacci number at position %d is %d\n", position, first);
    } else {
        for (int i = 2; i <= position; i++) {
            new_num = first + second;
            first = second;
            second = new_num;
        }
        printf("Fibonacci number at position %d is %d\n", position, second);
    }

    return 0;
}
