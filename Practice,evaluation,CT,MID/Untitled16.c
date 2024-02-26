#include<stdio.h>
int main()
{
    int i,a[30],max;


    for(i=0; i<5; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0; i<5; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max= %d",max);
}

