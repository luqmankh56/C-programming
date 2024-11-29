#include <stdio.h>
int main(){
	
    int first, last;

    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter last number: ");
    scanf("%d", &last);

    printf("Perfect squares in range are: ");

    for (int i = 1; i * i <= last; i++) {
        int square = i * i;
        if (square >= first) {
            printf("%d ", square);
        }
    }

    printf("\n");
    return 0;
}
