#include<stdio.h>

int power(int base,int exp)
{
    return pow(base,exp);
}


int main()
{
    int base,exp;
    printf("base = ");
    scanf("%d", &base);
    printf("exp= ");
    scanf("%d", &exp);

    printf("%d",power(base,exp));
}
