//c program to reverse the elements of an array using pointer

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int *ptr = arr; // pointer to the first element of the array
    int left = 0;
    int right = n - 1;

    while(left < right){
        
        // swap the elements at left and right indices
        int temp = *(ptr + left);
        *(ptr + left) = *(ptr + right);
        *(ptr + right) = temp;

        left++;
        right--;
    }

    printf("The reversed array is:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}