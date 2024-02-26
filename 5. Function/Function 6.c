#include<stdio.h>

void display(int x[50])
{
    for(int i=0; i<5; i++)
    {
        printf("%d ", x[i]);
    }
}

int main()
{
    int num[50]={10,20,45,30,50};
    display(num);
}
