#include<stdio.h>
int main()

{
    int i,num[100],n;
    printf(" how many number you want= ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max=num[0];
    for(i=0; i<n; i++)
    {
        if(max < num[i])
        max= num[i];
    }
    printf("max value is %d",max);



}


