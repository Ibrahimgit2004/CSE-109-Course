#include<stdio.h>
int main()
{
    int i,j,a[30],sum=0;

    for(i=0; i<5; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d\n",a[i]);

    }
    for(i=0; i<5; i++)
    {
        sum=sum+a[i];

    }
    printf("sum=%d\n",sum);
    printf("avg= %d",sum/5);


}
