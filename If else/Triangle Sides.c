#include<stdio.h>
#include <stdbool.h>

int main(){
    
    int side1, side2, side3;
    
    printf("Enter length of first side: ");
    scanf("%d", &side1);
    
    printf("Enter length of second side: ");
    scanf("%d", &side2);
    
    printf("Enter length of third side: ");
    scanf("%d", &side3);
    
    bool is_valid = (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2);
    
    if(is_valid){
        printf("It forms valid triangle.");
    }
    else{
        printf("It forms Invalid triangle.");
    }
    
    return 0;
}