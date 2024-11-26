//Author: Luqman Khan
#include <stdio.h>
int main(){
    int Nth, sum = 0;
    printf("Enter value of Nth Term: ");
    scanf("%d", &Nth);

    for (int i = 0; i < Nth; i++){
        sum += (2 * i + 1);
    }

    printf("The sum of the first %d odd numbers is: %d\n", Nth, sum);
    return 0;
}
