//Author: Luqman Khan
#include <stdio.h>

int main(){
    int num= 7;

    for (int i =1; i <=num; i++){
        for (int j = i; j < num; j++){
            printf(" ");
        }

        for (int k = 1; k <= i; k++){
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
