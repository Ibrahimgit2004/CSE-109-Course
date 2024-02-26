#include<stdio.h>
void sum(int *p1)
{

    int i,sum=0;
    for(i=0; i<5; i++)
    {
        sum=sum+*p1;
        p1++;


    }
    printf("%d ", sum);
}
int main()
{
    int a[]={10,20,30,40,50};
    sum(&a[0]);
}
