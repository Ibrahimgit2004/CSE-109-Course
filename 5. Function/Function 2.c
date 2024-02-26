#include<stdio.h>

void square(int a)
{
    printf("Square is= %d",a*a);
}




int main()
{
    int num;
    printf("number is= ");
    scanf("%d",&num);
    square(num);
}

