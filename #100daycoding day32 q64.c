/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}, i, max = 0, digit;

    scanf("%lld", &num);

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    max = 0;
    for (i = 0; i < 10; i++) {
        if (count[i] > count[max])
            max = i;
    }

    printf("%d", max);

    return 0;
}