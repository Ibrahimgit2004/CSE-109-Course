#include<stdio.h>

void reyad(int base,int exp)
{
    int result;
    result= pow(base,exp);
    printf("result is= %d\n",result);
}

int main()
{

    reyad(5,2);
    reyad(6,2);
}
