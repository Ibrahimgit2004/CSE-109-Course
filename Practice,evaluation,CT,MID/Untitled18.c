#include<stdio.h>
int main()
{
    int i,a[30],b[30];


    for(i=0; i<5; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        b[i]=a[i];
    }
    for(i=0; i<5; i++)
    {

        printf("%d",b[i]);
    }


}
