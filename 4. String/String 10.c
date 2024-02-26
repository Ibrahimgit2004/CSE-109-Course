#include<stdio.h>
int main()
{
    char s[30]="osama";
    char f[30];
    char i[30];

    strcpy(f,s);
    strrev(s);
    strcpy(i,s);

    printf("%s\n",f);
    printf("%s\n",i);

    int d= strcmp(f,i);

    printf("%d\n",d);
}
