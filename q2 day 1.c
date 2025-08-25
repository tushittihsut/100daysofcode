//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int a, b;
    int sum, difference, product, quotient, remainder;

    printf("Enter first number ");
    scanf("%d", &a);

    printf("Enter second number ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    if (b == 0) printf("quotient and remainder are undefined as division by 0 not defined)\n");
    else {
        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
    }

    return 0;
}
