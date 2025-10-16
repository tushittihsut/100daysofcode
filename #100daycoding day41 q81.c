/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    scanf("%[^\n]%*c", str);

    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("%d", count);

    return 0;
}