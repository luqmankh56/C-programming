#include <stdio.h>
int main(){

    int num1 , num2 ;
    
    printf("Enter First Number : ");
    scanf("%d", &num1);
    
    printf("Enter Second Number : ");
    scanf("%d", &num2);
    
    if(num1 == num2)
    {
    	printf("Both Numbers are Equal");
	}
    else if ( num1 > num2 )
	{
        printf("First Integar is greater then Second integar");
    }
    else 
	{
        printf("Second Integar is greater then First Integar");
    }
    
    return 0;
}