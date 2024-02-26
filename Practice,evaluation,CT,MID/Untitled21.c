#include<stdio.h>
int main()
{
    int i,value,pos=-1,a[]={1,2,3,4,5,6};

    printf("value= ");

    scanf("%d", &value);

    for(i=0; i<6; i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;

        }

    }



    if(pos==-1)
    {
        printf("not found");
    }
    else
    {
        printf("position= %d", pos);
    }




}
