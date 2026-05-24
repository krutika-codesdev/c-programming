//Compare two strings without using strcmp() function
//Returns 0 if equal, positive if str1 > str2, negative if str1 < str2

#include <stdio.h>
#include <string.h>

int compareStrings(char str1[], char str2[]){

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0'){

        if (str1[i] == str2[i]){
            i++;
        }

        else if (str1[i] > str2[i]){
            return 1;
        }
        else {
            return -1;
        }
    }

    return str1[i] - str2[i];
}

void displayResult(int result){
    if (result == 0){
        printf("The strings are equal.");
    }

    else if (result > 0){
        printf("The first string is greater than the second string.");
    }

    else {
        printf("The first string is less than the second string.");
    }
}

int main(){
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    int result = compareStrings(str1, str2);

    displayResult(result);
}