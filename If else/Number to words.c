//Author: Luqman Khan
#include <stdio.h>
int main(){
    
    int number;
    
    printf("Enter number between 0 & 9: ");
    scanf("%d", &number);

    
    if (number == 0) {
        printf("Zero\n");
    } else if (number == 1){
        printf("One\n");
    } else if (number == 2){
        printf("Two\n");
    } else if (number == 3){
        printf("Three\n");
    } else if (number == 4){
        printf("Four\n");
    } else if (number == 5){
        printf("Five\n");
    } else if (number == 6){
        printf("Six\n");
    } else if (number == 7){
        printf("Seven\n");
    } else if (number == 8){
        printf("Eight\n");
    } else if (number == 9){
        printf("Nine\n");
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
