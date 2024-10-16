//Author: Luqman Khan
#include <stdio.h>

int check(int num){
    if (num > 0) {
        return 1; 
    } else if (num < 0){
        return -1; 
    } else{
        return 0; 
    }
}

int main(){
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int result = check(number);

    if (result == 1){
        printf("%d is positive.\n",number);
    }else if (result == -1){
        printf("%d is negative.\n",number);
    }else{
        printf("%d is zero.\n",number);
    }

    return 0;
}
