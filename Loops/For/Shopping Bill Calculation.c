#include <stdio.h>
int main(){
	
    int num;
    float price, total = 0;
    int quantity;

    printf("Welcone to Online Store..\n\n");
    printf("Enter number of items: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        printf("\nEnter price of item %d: ",i);
        scanf("%f", &price);
        printf("Enter quantity of item %d: ",i);
        scanf("%d", &quantity);

        total += price * quantity;
    }

    printf("Total Bill: Rs%.2f\n", total);

    return 0;
}
