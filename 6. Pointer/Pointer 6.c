#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *p1,i;

    p1=&a[0];

    for(i=0; i<5; i++)
    {
        printf("%d ", *p1);
        p1++;
    }
}
