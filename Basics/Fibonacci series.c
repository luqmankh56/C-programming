#include <stdio.h>
int main(){

    int limit, first = 0, second = 1, new_num;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d: [", limit);

    if (limit >= 0) {
        printf("%d", first);
    }

    if (limit >= 1) {
        printf(", %d", second);
    }

    new_num = first + second;
    while (new_num <= limit) {
        printf(", %d", new_num);
        first = second;
        second = new_num;
        new_num = first + second;
    }

    printf("]\n");

    return 0;
}
