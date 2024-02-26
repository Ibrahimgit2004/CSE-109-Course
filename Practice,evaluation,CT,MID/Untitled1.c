#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50],k,sum=0,i,j,r1,c1,r2,c2;

    printf("number of row 1= ");
    scanf("%d",&r1);
    printf("number of col 1= ");
    scanf("%d",&c1);
    printf("number of row 2= ");
    scanf("%d",&r2);
    printf("number of col 2= ");
    scanf("%d",&c2);


    while(c1!=r2)
    {
        printf("Error !!  c1 and r2 is not equal\n");
        printf(" r1 and c1 = \n");
        scanf("%d %d",&r1,&c1);
        printf(" r2 and c2 = \n");
        scanf("%d %d",&r2,&c2);

    }


    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]= ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
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
    printf("\n\n");


    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]= ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n");
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
                sum=sum+a[i][k] * b[k][j];
            }
            c[i][j]=sum;

        }
    }
    printf("A*B=");
    for(i=0; i<r1; i++)
    {
        printf("\t");

        for(j=0; j<c2; j++)
        {

            printf("%d ", c[i][j]);

        }
        printf("\n");

    }





}
