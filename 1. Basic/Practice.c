#include<stdio.h>
int main()
{
    int a;
    printf("a is ");
    scanf("%d", &a);

    if(a>0)
    {
        printf("a is positive");
    }
    else if(a==0)
    {
        printf("a is zero");
    }
    else
    {
        printf("a is negative");
    }
    getch();
}
