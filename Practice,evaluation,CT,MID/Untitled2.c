#include<stdio.h>
int main()
{
    int i,n,sum1=0,sum2=0,sum=0;

    printf("n= ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("%d",i);
        }

        if(i%2!=0 && i!=1)
        {
            printf("+%d",i);
        }
        if(i%2==0)
        {
            printf("-%d",i);
        }
        if(i==n)
        {
            printf("= ");
        }
    }

    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            sum1=sum1+i;
        }
        if(i%2==0)
        {
            sum2=sum2+i;
        }
        sum=sum1-sum2;
    }


    printf("%d",sum);
}
