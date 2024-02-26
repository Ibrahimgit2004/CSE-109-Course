#include<stdio.h>
int main()
{
    char s[]= "bangladesh";
    char i[]= "india chor";
    char t[30];

    printf("before swapping\n");
    printf("s= %s\n", s);
    printf("i= %s\n", i);


    strcpy(t,s);
    strcpy(s,i);
    strcpy(i,t);

    printf("after swapping\n");
    printf("s= %s\n", s);
    printf("i= %s\n", i);

}
