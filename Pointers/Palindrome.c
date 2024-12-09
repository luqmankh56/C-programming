#include <stdio.h>
int main(){
	
    char str[30];
    int i, length, isPalindrome = 1;

    printf("Enter string: ");
    scanf("%s", str);

    length = strlen(str);

    for(i = 0; i < length / 2; i++){
        if(str[i] != str[length - i - 1]){
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Palindrome.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}
