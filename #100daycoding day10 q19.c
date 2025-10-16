/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main ()
{
    int s1, s2, s3;
    
    printf ("Enter the sides of the Triangle: \n");
    scanf ("%d %d %d", &s1, &s2, &s3);
    
    if ( s1 == s2 && s2 == s3 && s1 == s3 )
    {
        printf ("The Triangle is an Equilateral Triangle");
    }
    
    else if ( s1 == s2 || s2 == s3 || s1 == s3 )
    {
        printf ("The Triangle is an Isosceles Triangle");
    }
    
    else if ( s1 != s2 && s2 != s3 && s1 != s3 )
    {
        printf ("The Triangle is a Scalene Triangle");
    }
    
    else
    {
        printf ("Traingle cannot be formed as sides are invalid");
    }
    
    return 0;
}