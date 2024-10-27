//Author: Luqman Khan
#include <stdio.h>
int main(){
	
    int stock = 50, step, perfume;

    do {
        printf("\nPerfume Store System\n\n");
        printf("1. Add Perfumes\n");
        printf("2. Remove Perfumes\n");
        printf("3. Check Perfumes\n");
        printf("4. Exit\n");
        
        printf("Enter step number: ");
        scanf("%d", &step);

        if (step == 1){
            printf("Enter perfumes to add: ");
            scanf("%d", &perfume);
            stock += perfume;
            printf("Stock updated! Current perfumes: %d\n", stock);
        } 
        else if (step == 2){
            printf("Enter perfumes to remove: ");
            scanf("%d", &perfume);
            if (perfume <= stock){
                stock -= perfume;
                printf("Stock updated! Current perfumes: %d\n", stock);
            } else {
                printf("Not enough stock available.\n");
            }
        } 
        else if (step == 3){
            printf("Current perfumes: %d\n", stock);
        } 
        else if (step == 4){
            printf("Exiting system.\n");
        } 
        else {
            printf("Invalid. Try again.\n");
        }
    } while (step != 4);

    return 0;
}
