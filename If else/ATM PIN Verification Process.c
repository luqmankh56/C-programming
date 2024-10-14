//Author: Luqman Khan
#include <stdio.h>
int main(){
    
    int correctPIN = 1234;
    int enteredPIN;
    int attempts = 0;

    while (attempts < 3){
        printf("Enter your PIN: \n");
        scanf("%d", &enteredPIN);

        if (enteredPIN == correctPIN) {
            printf("Access granted.\n");
            return 0;
        } else {
            printf("Incorrect PIN. Try again.\n");
            attempts++;
        }
    }

    printf("Card blocked. Too many attempts.\n");
    return 0;
}
