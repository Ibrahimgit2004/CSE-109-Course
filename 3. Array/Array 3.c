#include<stdio.h>
int main()

{
    int sum=0,i,marks[1000],n;
    printf(" how many marks you need = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &marks[i]);
        sum=sum+marks[i];

    }


     printf("total number is %d\n", sum);
     printf("avg number is %.3f", (float)sum/5);

}

