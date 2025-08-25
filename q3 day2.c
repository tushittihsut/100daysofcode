//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of Rectangle = %d\n", area);
    printf("Perimeter of Rectangle = %d\n", perimeter);

    return 0;
}
