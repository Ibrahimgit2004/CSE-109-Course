#include<stdio.h>
int main()
{
    int i,sum=0,n;

    printf("n= ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i<n)
        {
            printf("%d*%d+",i,i+1);
        }
        else if(i==n)
        {
            printf("%d*%d = ",i,i+1);
        }


    }



    for(i=1; i<=n; i++)
    {
        sum=sum+(i*(i+1));
    }

    printf("%d", sum);
}
