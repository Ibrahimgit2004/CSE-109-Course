//void type function

#include<stdio.h>

void sum(int a,int b,int c)
{
    printf("The sum is= %d\n", a+b+c);
}

void sub(int a,int b,int c)
{
    printf("The sub is= %d", a-b-c);
}

int main()
{
    sum(10,20,30);
    sub(10,20,30);
}
