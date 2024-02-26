#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    int d=strcmp(s1,s2);
    if(d==0)
    {
        printf("the number is pallidrome");
    }

    else
    {
        printf("the number is not pallidrome");
    }
}


