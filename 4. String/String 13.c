#include<stdio.h>
int main()
{
     char s[50],ch;
    int i,vowel,constant,digits,words,others;

     printf("enter string= ");
     gets(s);
     i=vowel=constant=words=digits=others=0;



     while((ch=s[i])!='\0')
     {
        if( (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') || (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') )
            vowel++;
        else if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
            constant++;
        else if(ch>='0' && ch>='9')
            digits++;
        else if(ch==' ')
            words++;
            else
                others++;

         i++;
     }
     words++;

     printf("vowel= %d\n", vowel);
     printf("constant= %d\n", constant);
     printf("digits= %d\n", digits);
     printf("words= %d\n", words);
     printf("others= %d", others);





}
