//Author: Luqman Khan
#include <stdio.h>
int main(){
    int n;
    double sum = 0.0;

    printf("Enter the nth Term: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    
    printf("The sum of the series up to 1/%d is: %.6lf\n", n, sum);
    return 0;
}
