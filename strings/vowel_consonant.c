// Count Vowels and Consonants in a String
#include <stdio.h>
#include <string.h>

int isAlphabet(char ch){
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int isVowel(char ch){

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main(){
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0'){
        char ch =  str[i];

        if (isAlphabet(ch)){
            if (isVowel(ch)){
                vowels++;
            }

            else {
            consonants++;
            }
        }

        i++;
    }
    printf("Number of vowels in the string: %d\n", vowels);
    printf("Number of consonants in the string: %d\n", consonants);
    return 0;
}