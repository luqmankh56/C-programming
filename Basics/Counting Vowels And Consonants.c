#include <stdio.h>

void Vowels_Consonants(char str[]) {
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if ((ch >= 'a' && ch <= 'z')) {  
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str); 
    Vowels_Consonants(str);
    return 0;
}
