#include <stdio.h>
int balanced(char string[]){
    int count = 0; 

    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == '(' ||string[i] == '{' ||string[i] == '['){
            count++; 
        } 
        else if (string[i] == ')' ||string[i] == '}' ||string[i] == ']'){
        count--;
        }
        
        if (count<0){
        return 0;
        }
    }

    return (count == 0);
}

int main() {
    char string[100];

    printf("Enter string of brackets: ");
    scanf("%s", string);

    if (balanced(string)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
