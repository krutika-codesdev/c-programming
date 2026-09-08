//c program to check whether a string is palindrome or not

#include <stdio.h>
#include <string.h>

void toLower(char *str){
    int i = 0;
    while(str[i]){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32; // Convert uppercase to lowercase
        }
        i++;
    }
}

int isPalindrome(char *str){
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right){
        if(str[left] != str[right]){
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];
    char original[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Read a line of input

    strcpy(original, str);

    toLower(str); // Convert the string to lowercase
    
    if(isPalindrome(str)){
        printf("\"%s\" is a palindrome.\n", original);
    } else {
        printf("\"%s\" is not a palindrome.\n", original);
    }
    return 0;
}