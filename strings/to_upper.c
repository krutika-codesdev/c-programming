// Convert string to uppercase without using in-built functions

#include <stdio.h>
#include <string.h>
void to_upper(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32; // Convert to uppercase by subtracting 32 from the ASCII value
        }
        i++;
    }
}

int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    to_upper(str);
    printf("String in uppercase: %s\n", str);
    
    return 0;
}