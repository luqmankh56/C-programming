#include <stdio.h>
#include <string.h>

void Palindrome(char word[]){
    int length = strlen(word);
    int isPalindrome = 1;

    for (int i = 0; i < length / 2; i++){
        if (word[i] != word[length - i - 1]){
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("It is a Palindrome\n");
    } else {
        printf("It is not a Palindrome\n");
    }
}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    Palindrome(word);
    return 0;
}
