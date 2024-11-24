#include <stdio.h>
int main(){
    int start, last, sum = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter last number: ");
    scanf("%d", &last);

    for (int i = start; i <= last; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("Sum of even numbers from in range: %d\n",sum);

    return 0;
}
