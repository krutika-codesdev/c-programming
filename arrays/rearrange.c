/*Rearrange an array using pointer arithmetic so that all negative numbers come first, 
  positive numbers come next, and zeroes appear at the end.*/

#include <stdio.h>

void rearrange(int *arr, int n){
    if(arr == NULL || n <= 0){
        return;
    }

    int *left = arr;
    int *right = arr + n - 1;

    while(left <= right){
        while(left <= right && *left < 0){
            left++;
        }

        while(left <= right && *right >= 0){
            right--;
        }

        if(left < right){
            int temp = *left;
            *left = *right;
            *right = temp;

            left++;
            right--;
        }
    }

    left = arr;
    right = arr + n - 1;

    while(left <= right){
        while(left <= right && *left != 0){
            left++;
        }

        while(left <= right && *right == 0){
            right--;
        }

        if(left < right){
            int temp = *left;
            *left = *right;
            *right = temp;

            left++;
            right--;
        }
    }
}

void display(int *arr, int n){
    if(arr == NULL || n <= 0){
        return;
    }

    int *p = arr;
    while(p < arr + n){
        printf("%d ", *p);
        p++;
    }

    printf("\n");
}

int main(){
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);

    int *p = arr;

    for(int i = 0; i < n; i++){
        scanf("%d", p);
        p++;
    }

    rearrange(arr, n);

    printf("Rearranged array:\n");
    
    display(arr, n);

    return 0;
}