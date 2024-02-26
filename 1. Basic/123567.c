#include<stdio.h>
int main ()
{
    char ch1;
    char ch2;
    char ch3;
    float x;
    printf("type s for student or type e for employee: ");
    scanf("%c",&ch1);


    if(ch1=='s')
    {
        printf("type earn creadit': ");
        scanf("%f",&x);
        if(0<=x && 36>=x)
        {
            printf("level 1");
        }
        else if(36<x && 72>=x)
        {
            printf("level 2");

        }
        else
        {
            printf("bokachoda");
        }
    }
    if(ch1=='e')
    {
        printf("input your faculty code(m or c):\n ");
        scanf("%c",&ch2);
        scanf("%c",&ch2);
        if(ch2=='m')
        {
            printf("military facultuy\n");
        }
        else if(ch2=='c')
        {
            printf("civil faculty\n");
        }
        {
            printf("input your code(p or a):");
            scanf("%c",&ch3);
            scanf("%c",&ch3);
            if(ch3=='p')
            {
                printf("parmanent");
            }
            else if(ch3=='a')
            {
                printf("adjunct");
            }
        }

    }
}
