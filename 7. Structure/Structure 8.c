#include<stdio.h>


struct std
{
        char name[50];
        int marks;
};

int main()
{
    struct std std1,std2;
    printf("1st student:\n");
    printf("name= ");
    gets(std1.name);
    printf("marks= ");
    scanf("%d",&std1.marks);

    printf("name= %s\n",std1.name);
    printf("marks= %d",std1.marks);
}



