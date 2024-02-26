#include<stdio.h>


void sum(int n)
    {
        int i=0,sum=0;
        for(i=0; i<=n; i++)
        {
            sum=sum+i;
        }
        printf("sum= %d",sum);
    }
    int main()
    {
        int n;
        printf("n= ");
        scanf("%d", &n);
        sum(n);
    }

