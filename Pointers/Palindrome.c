#include <stdio.h>
int main(){
    char str[30];
    char *start, *end;


    printf("Enter a string: ");
    scanf("%s", str);

    
    start = str;  
    end = str + strlen(str) - 1; 

    
    while (start < end) {
        if (*start != *end) {
            printf("Not a palindrome.\n");
            return 0;  
        }
        start++;
        end--; 
    }

    printf("Palindrome.\n");

    return 0;
}
