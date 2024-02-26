#include<stdio.h>
int main()
{
    int A[30][30],i,j,sum=0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("A= ");

    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {

            printf("%d ", A[i][j]);
        }
        printf("\n");

    }

    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {
         if(i==j)
         {
             sum=sum+A[i][j];
         }

        }

    }

    printf("%d", sum);




}
