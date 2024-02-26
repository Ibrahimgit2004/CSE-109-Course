#include<stdio.h>

void min(int a[])
{
    int min=a[0];

    for(int i=0; i<5; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimum value is: %d\n", min);
}

void max(int a[])
{
    int max=a[0];

    for(int i=0; i<5; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum value is: %d\n", max);
}


int main()
{
    int x[5]={25,11,35,65,20};
    max(x);
    min(x);
}
