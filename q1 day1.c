//Write a program to input two numbers and display their sum.
#include <stdio.h>

int main() {
    int n1, n2, sum;

    printf("Enter first number ");
    scanf("%d", &n1);

    printf("Enter second number ");
    scanf("%d", &n2);

    sum = n1 + n2;

    printf("Sum = %d\n", sum);

    return 0;
}
