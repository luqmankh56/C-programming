#include <stdio.h>
int main(){
	
    char original[30], reversed[30];
    int i, length;

    printf("Enter original name: ");
    scanf("%s", original); 

    length = strlen(original);
    
    for (i = 0; i < length; i++) {
        reversed[i] = original[length - 1 - i];
    }
    reversed[length] = '\0';

    printf("Reversed string: %s\n", reversed);

    return 0;
}
