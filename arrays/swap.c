//c program to swap two numbers using pointer

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;  // store the value at address a in temp
    *a = *b;        // assign the value at address b to address a
    *b = temp;      // assign the value in temp to address b
}

int main() {
    int num1, num2;

    printf("Enter two numbers to swap:\n");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);  // pass the addresses of num1 and num2

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}