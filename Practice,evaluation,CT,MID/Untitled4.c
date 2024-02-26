#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50],i,j,k,sum=0,r1,r2,c1,c2;

    printf("number of row of matrix 1= ");
    scanf("%d",&r1);
    printf("number of col of matrix 1= ");
    scanf("%d",&c1);
    printf("number of row of matrix 2= ");
    scanf("%d",&r2);
    printf("number of col of matrix 2= ");
    scanf("%d",&c2);

    while(c1!=r2)
    {
    printf("Error! number of col of matrix 1 and number of row of matrix 2 are not same\n");
    printf("number of row of matrix 1= ");
    scanf("%d",&r1);
    printf("number of col of matrix 1= ");
    scanf("%d",&c1);
    printf("number of row of matrix 2= ");
    scanf("%d",&r2);
    printf("number of col of matrix 2= ");
    scanf("%d",&c2);
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]= ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("A= ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]= ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("B= ");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",b[i][j]);

        }
        printf("\n");
    }

      for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    printf("\n");
    printf("c= ");
     for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
           printf("%d ",c[i][j]);

        }

        printf("\n");
    }


}
