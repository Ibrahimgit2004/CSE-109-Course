#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3],B[3][3];

    printf(" enter elements for A matrix \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<3; i++)
    {

        if(i==1)
        {
            printf("A= \t");
        }
        if(i==0||i==2)
        {
            printf("\t");
        }
        for(j=0; j<3; j++)
        {
            printf("%d ", A[i][j]);
        }
            printf("\n");
    }


    printf("\n\nenter elements for B matrix \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("B[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        if(i==1)
        {
            printf("B= \t");
        }
        if(i==0||i==2)
        {
            printf("\t");
        }
        for(j=0; j<3; j++)
        {
            printf("%d ", A[i][j]);
        }
            printf("\n");
    }


}

