/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>

int main()
{
    int marks;
    
    printf ("Enter MARKS\n");
    scanf ("%d", &marks);
    
    if ( marks >= 90 && marks <=100 )
    {
        printf ("GRADE A");
    }
    
    else if ( marks >= 80 && marks <=89 )
    {
        printf ("GRADE B");
    }
    
    else if ( marks >= 70 && marks <=79 )
    {
        printf ("GRADE C");
    }
    
    else if ( marks >= 60 && marks <=69 )
    {
        printf ("GRADE D");
    }
    
    else 
    {
        printf ("GRADE F");
    }
    
    return 0;
}