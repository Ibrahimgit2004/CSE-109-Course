#include<stdio.h>

void display(int sum[])
{
    int max=sum[0];
    for(int i=0; i<5; i++)
    {
        if(sum[i]>max)
        {
            max=sum[i];

        }

    }

     printf("%d",max);
}
int main()
{
    int x[5]={10,20,130,70,25};
    display(x);

}
