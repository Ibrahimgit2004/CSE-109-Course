#include<stdio.h>
int main()
{
    int i,j,a[30][30],sum=0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    printf("A= ");

    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf(" ");
        printf("\n");

    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i>j)
    {
        sum=sum+a[i][j];
    }
        }
    }



    printf("%d",sum);



}
