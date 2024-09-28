#include<stdio.h>
int main (){
    
    int id;
	int hours;
	int salary;
	
	printf("Enter Employ id : " );
	scanf("%d", &id );
	
	if (id <= 0){
		
	    printf("Invalid id!");
	    
	}
	
	else {
		
	    printf("Enter Worked Hour's : ");
	    scanf("%d", &hours);
	    
	    printf("Enter Salary Rate : ");
	    scanf("%d", &salary);
	    
	    int Money = hours * salary ;
	     
	    printf("Your Salary is : %d ", Money);
	}
	
	
	return 0;
}
