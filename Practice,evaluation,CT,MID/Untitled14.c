#include<stdio.h>
int main()
{
    char s[30];
    char w[30];
    char i[30];

    int l;

    printf("s= ");
    gets(s);
    strcpy(w,s);

    strrev(s);
    strcpy(i,s);



    l=strcmp(w,i);
    //printf("%d", l);

    //printf("%d",l);

    if(l==0)
    {
       printf("%s is palindrome",w);
    }

    if(l==1 || l==-1)
    {
       printf("%s is not palindrome",w);
    }










}

