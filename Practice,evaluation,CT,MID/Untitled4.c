#include<stdio.h>

void area(int b,int h)
{

    printf("area is %d",(b*h)/2 );
}

int main()
{
    int base,height;

    printf(" base is= ");
    scanf("%d", &base);
    printf("height is = ");
    scanf("%d", &height);

    area(base,height);


}
