// C program that counts how many words are in a given string.

#include <stdio.h>
#include <string.h>

int count_words(char str[]){
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if (str[i] != ' ' && (i == 0 || str[i-1] == ' ')){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Number of words in the string: %d\n", count_words(str));
    
    return 0;
}