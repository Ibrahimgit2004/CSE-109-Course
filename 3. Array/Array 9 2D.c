#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3];

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
        for(j=0; j<3; j++)
        {
            printf("%d ", A[i][j]);
        }
            printf("\n");
    }


}

