#include<stdio.h>
int main()
{
    char s[]="Osama";
    char i[]="Osama";

    int d=strcmp(s,i);

    printf("%d\n",d);

    if(d==0)
    {
        printf("string are equal");
    }
    else
    {
        printf("string are not equal");
    }
}
