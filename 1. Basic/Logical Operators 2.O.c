#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, D;

    D= ((a==b)&&(b==c));  // and(&&) operator hoilo:- sob true hoile 1 hobe
    printf("%d \n",D);

    D= ((a==b) || (b==c));  // or(||) operator hoilo:- ekta true hoilei 1 hobe
    printf("%d\n",D);

    D= (!(a==b)||!(b==c));  // not(!) operator hoilo:- konotai true na hoile 1 hobe...mane minus minus positive er moto bepar.
    printf("%d",D);



    getch();
}
