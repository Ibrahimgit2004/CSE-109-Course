#include<stdio.h>
int main()
{
    int x=10,y=20,temp;
    int *p1,*p2;

    p1=&x;
    p2=&y;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("x= %d\n",*p1);
    printf("y= %d",*p2);
}
