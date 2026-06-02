// C program that removes all duplicate characters from a string

#include <stdio.h>
#include <string.h>

int getLength(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}

void removeDuplicates(char str[]){
    int length = getLength(str);
    int index = 0;

    for(int i = 0; i < length; i++){
        int j;
        for(j = 0; j < i; j++){
            if(str[i] == str[j]){
                break;
            }
        }
        if(j == i){
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf(" %99[^\n]", str);
    
    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}