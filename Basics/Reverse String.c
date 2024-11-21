#include <stdio.h>
int main(){
	
    char orginal[30], reversed[30];
    int i, j = 0; 

    printf("Enter original name: ");
    scanf("%s", original);

    int length = strlen(original);

    for (i = length - 1; i >= 0; i--) { 
        reversed[j] = original[i];
        j++; /
    }
    reversed[j] = '\0';

    printf("Reversed string: %s", reversed);

    return 0;
}
