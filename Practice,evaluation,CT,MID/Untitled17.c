#include<stdio.h>
int main()
{
    int i,a[30],max;



    a[0]=0;
    a[1]=1;

      for(i=2; i<10; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<10; i++)
    {
        printf("%d ",a[i]);

    }


}
