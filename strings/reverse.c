// Reverse a String using Two Pointer Approach (without built-in functions)

#include <stdio.h>
#include <string.h>

int getLength(char str[]){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

int main(){
    char str[100];

    printf("Enter string: ");
    scanf("%[^\n]", str); 
    
    int left = 0;
    int right = getLength(str) - 1;


    while (left < right){
        int temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        left++;
        right--;
    }

    printf("Reverse of string: %s", str);
}