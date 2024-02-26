#include<stdio.h>
int main()
{
    int i,j,noR,noC;
    int A[30][30],B[30][30],sum[30][30];

    printf("number of rows= ");
    scanf("%d", &noR);
    printf("number of columns= ");
    scanf("%d", &noC);

    printf(" enter elements for A matrix \n");

    for(i=0; i<noR; i++)
    {
        for(j=0; j<noC; j++)
        {
            printf("A[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nenter elements for B matrix \n");

    for(i=0; i<noR; i++)
    {
        for(j=0; j<noC; j++)
        {
            printf("B[%d][%d]= ", i,j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("A= ");
    for(i=0; i<noR; i++)
    {

        printf("\t");
        for(j=0; j<noC; j++)
        {
            printf("%d ", A[i][j]);
        }
            printf("\n");
    }
    printf("\n\n");

    printf("B= ");
    for(i=0; i<noR; i++)
    {
        printf("\t");
        for(j=0; j<noC; j++)
        {
            printf("%d ", B[i][j]);
        }
            printf("\n");
    }

    printf("\n\n\n");


    for(i=0; i<noR; i++)
    {

        for(j=0; j<noC; j++)
        {
            sum[i][j]=A[i][j]+B[i][j];
        }

    }
    printf("A+B= \n");
    for(i=0; i<noR; i++)
    {

        for(j=0; j<noC; j++)
        {
            printf("%d ", sum[i][j]);
        }
            printf("\n");
    }




}


