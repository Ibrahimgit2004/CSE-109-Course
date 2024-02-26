#include<stdio.h>
int main()
{
     int i,j,a[30][30];

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
     printf("A= ");

    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf(" ");
        printf("\n");

    }

    printf("Transpose Matrics\n\n\n");

    printf("TranA= ");

     for(j=0; j<3; j++)
    {
        printf("\t");
        for(i=0; i<4; i++)
        {
            printf("%d ",a[i][j]);

        }
        printf(" ");
        printf("\n");

    }

}
