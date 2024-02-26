#include<stdio.h>
int main()
{
    int a,b;
    float c,d;

    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%f", &c);
    printf("d=");
    scanf("%f", &d);

    printf("now a is= %d\n", ++a);
    printf("now b is= %d\n", ++b);
    printf("now c is= %f\n", ++c);
    printf("now d is= %f", ++d);

    getch();
}
