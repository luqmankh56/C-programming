#include<stdio.h>
int main(){

    int age;

    printf("Enter Your age : ");
    scanf("%d", &age);

    if (age >= 18)
	{
        printf("You are eligible to cast your Vote.");
    }
    else 
	{
        printf("You are not eligible to cast your vote.");
    }
    return 0;
}