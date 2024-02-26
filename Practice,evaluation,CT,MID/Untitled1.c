#include<stdio.h>

void sum (int n)
{
    int sum=0;
    for(int i=0; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("total sum is= %d\n", sum);

}

int main()
{
    sum(100);
    sum(5);
}
