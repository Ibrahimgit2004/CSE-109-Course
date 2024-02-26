#include<stdio.h>
int main()

{
    int sum=0,i,marks[5];

    for(i=0; i<=4; i++)
    {
        scanf("%d", &marks[i]);
        sum=sum+marks[i];

    }


     printf("total number is %d", sum);

}

