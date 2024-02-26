#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    printf("n= ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            count=count+1;
            printf("%d ",count);
        }

        printf("\n");
    }
}
