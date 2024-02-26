#include<stdio.h>
int main()
{
    int A[30][30],B[30][30],c[30][30],r1,c1,r2,c2,i,j,k,sum=0;

    printf(" r1 and c1 = \n");
    scanf("%d %d",&r1,&c1);
    printf(" r2 and c2 = \n");
    scanf("%d %d",&r2,&c2);

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
            printf("A[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]= ", i,j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("A= ");
    for(i=0; i<r1; i++)
    {
        printf("\t ");
        for(j=0; j<c1; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("B= ");
    for(i=0; i<r2; i++)
    {
        printf("\t ");
        for(j=0; j<c2; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+A[i][k] * B[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    printf("c=");
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
