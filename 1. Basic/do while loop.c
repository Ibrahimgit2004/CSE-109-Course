#include<stdio.h>
int main()
{
    int a,sum=0;

    do
    {
        printf(" a = ");
        scanf("%d", &a);
        sum=sum+a;
    }
    while(a<=100);
        printf("sum is = %d", sum);
}
