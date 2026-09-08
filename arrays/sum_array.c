//c program to find sum of elements of array using pointer

#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int *ptr = arr; // pointer to the first element of the array

    for(int i = 0; i < n; i++){
        sum += *ptr; // dereferencing pointer to get the value
        ptr++;       // move pointer to the next element
    }

    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}
