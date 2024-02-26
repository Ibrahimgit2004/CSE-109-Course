#include<stdio.h>
int main()
{
    int a=54654;
    float b=2.658855696;
    double c=2.36356985;
    char d='A';

    printf("size= %zu\n", sizeof(a));
    printf("size= %zu\n", sizeof(b));
    printf("size= %zu\n", sizeof(c));
    printf("size= %zu", sizeof(d));
}
