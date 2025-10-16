/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, percent;
    
    printf ("Enter COST PRICE: \n");
    scanf ("%f", &cp);
    
    printf ("Enter SELLING PRICE: \n");
    scanf ("%f", &sp);
    
    if ( sp > cp )
    {
        profit = sp-cp;
        percent = (profit/cp)*100;
        printf ("Profit %.2f", percent);
    }
    
    else if ( sp < cp )
    {
        loss = cp-sp;
        percent = (loss/cp)*100;
        printf ("Loss %.2f", percent);
    }
    
    else
    {
        
        printf ("NO PROFIT NO LOSS");
    }
    
    return 0;
}