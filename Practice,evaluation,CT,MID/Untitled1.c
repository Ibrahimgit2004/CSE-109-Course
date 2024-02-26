#include<stdio.h>
int main()
{
    int sum=0,i,n;

    printf("n= ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i<n)
        {
            printf("%d^%d+",i,i);
        }
        else if(i==n)
        {
            printf("%d^%d=",i,i);
        }




    }

    for(i=1; i<=n; i++)
    {
        {
            sum=sum+i*i;
        }
    }
    printf("%d", sum);
}
