#include<stdio.h>
int main()
{
    int num[]={12,55,80,75,14,96,12,15,85};
    int i,value ,position=-1;

    printf("what number you want= ");
    scanf("%d", &value);

    for(i=0; i<9; i++)
    {
        if(value==num[i])
            {
                position = i+1;
                break;
            }
    }
    if(position==-1)
        printf("not found");
    else
        printf("your value %d is in position %d", value,position);
}
