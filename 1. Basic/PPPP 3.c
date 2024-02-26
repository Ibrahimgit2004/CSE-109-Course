#include<stdio.h>
int main ()
{
    char ch;
    float cdt;
    printf("your charater= ");
    scanf("%c", &ch);


    if(ch=='s')
    {
        printf("earned credit= ");
        scanf("%f", &cdt);
        if(0<=cdt && 35>=cdt)
        {
            printf("level 1");
        }
        if(36<=cdt && 71>=cdt)
        {
            printf("level 2");
        }
        if(72<=cdt && 108>=cdt)
        {
            printf("level 3");
        }
        else if(cdt>108)
        {
            printf("level 4");
        }
    }

    if(ch=='e')
    {
        char ch1;
        printf("your charater= ");
        scanf(" %c", &ch1);



        if(ch1=='m')
        {
            printf("miliitary faculty");
        }
        if(ch1=='c')
        {
            printf("civil faculty\n");



       }

    }
      char ch2;
        printf("your charater= ");
        scanf(" %c", &ch2);
    if(ch=='p')
        {
            printf("permanent");
        }

        if(ch=='a')
        {
            printf("adjunct");
        }
}
