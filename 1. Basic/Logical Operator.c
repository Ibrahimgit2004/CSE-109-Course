#include <stdio.h>
int main()
{
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", b, c, b == c);
    printf("%d > %d is %d \n",  a, b, a > b);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d != %d is %d \n", a, b, a != b);


    return 0;
}
