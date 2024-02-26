#include<stdio.h>
int main()
{
    char s[50],ch;

    int i=0,sl=0,cl=0,d=0;

    printf("enter the string = ");
    gets(s);

    while((ch=s[i])!='\0')
    {
        if(ch>='A' && ch<='Z')
            cl++;
        else if(ch>='a' && ch<='z')
            sl++;
        else if(ch>='0' && ch<='9')
            d++;


        i++;
    }

    printf("capital letter number= %d\n", cl);
    printf("small letter number= %d\n", sl);
    printf("digits number= %d\n", d);
}
