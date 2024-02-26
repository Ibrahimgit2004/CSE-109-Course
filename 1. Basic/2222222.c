#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("a= ");
    scanf("%d", &a);
    printf("n= ");
    scanf("%d", &n);

    for(a=a; a<=n; a++)
    {

        sum=sum+(a*a);

        if(a<n)
        {

            printf("%d^2+",a);

        }
        else
        {
            printf("%d^2=",a);
        }


    }


    printf("%d", sum);
}
