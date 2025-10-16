/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main() {
    int i, j;
    int n = 5; 
    
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < i; j++) 
        {
            printf(" ");
        }
        // Print stars
        for(j = 0; j < n - i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}