#include<stdio.h>

float area(float b,float h)
{
    return .5*b*h;
}

int main()
{
    float b,h;
    printf("base= ");
    scanf("%f",&b);
    printf("height= ");
    scanf("%f",&h);

    printf("The area is = %f", area(b,h));
}
