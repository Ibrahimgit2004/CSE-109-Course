#include<stdio.h>
int main()
{
    int x;
    int *p;


    p=&x;

    printf("x= ");
    scanf("%d", &x);
    printf("\n\n");

    printf("x= %d\n", x);
    printf("adress x= %d\n", &x);
    printf("*p= %d\n", *p);
    printf("*p= %d", &*p);


}
