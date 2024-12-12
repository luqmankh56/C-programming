#include <stdio.h>
int main(){
	
    char str[20]; 
    char alphabet;
    int count = 0;
    
    printf("Enter string: ");
    scanf("%s", str);
    
    printf("Enter character to count: ");
    scanf(" %c", &alphabet);
    
    char *ptr = str;
    while (*ptr != '\0'){
        if (*ptr == alphabet){
            count++;
        }
        ptr++;
    }
    
    printf("\nThe character '%c' appears %d times in the string.\n", alphabet, count);
    
    return 0;
}