// Count Vowels and Consonants in a String
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0'){
        char ch =  str[i];

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vowels++;
           }

        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
            consonants++;
        }

        i++;
    }
    printf("Number of vowels in the string: %d\n", vowels);
    printf("Number of consonants in the string: %d\n", consonants);
    return 0;
}