#include<stdio.h>
int main()

{
    float number;

    printf("enter numer:");
    scanf("%f", &number);

    if(80<=number)
    {
        if(100>=number)
        {
            printf("Grade:A+");
        }
    }
     if(75<=number)
    {
        if(79>=number)
        {
            printf("Grade:A");
        }
    }
     if(70<=number)
    {
        if(74>=number)
        {
            printf("Grade:A-");
        }
    }
     if(65<=number)
    {
        if(69>=number)
        {
            printf("Grade:B+");
        }
    }
     if(60<=number)
    {
        if(64>=number)
        {
            printf("Grade:A+");
        }
    }
     if(55<=number)
    {
        if(59>=number)
        {
            printf("Grade:B-");
        }
    }
     if(50<=number)
    {
        if(54>=number)
        {
            printf("Grade:C+");
        }
    }
     if(45<=number)
    {
        if(49>=number)
        {
            printf("Grade:C");
        }
    }
     if(40<=number)
    {
        if(44>=number)
        {
            printf("Grade:D");
        }
    }
     if(0<=number)
    {
        if(40>=number)
        {
            printf("Grade:F");
        }
    }
    getch();

}

