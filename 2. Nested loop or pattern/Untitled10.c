#include<stdio.h>
int main()
{
    int i,j,n;
    printf("n= ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("* ");
        }
        printf("\n");

    }
}

