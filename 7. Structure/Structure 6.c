//very important

#include<stdio.h>

struct person
{
    int age;
    int salary;

};

int main()
{
    struct person person[5];


    for(int i=0; i<5; i++)
    {
        printf("enter the information of person%d \n",i+1);
        printf("Age= ");
        scanf("%d", &person[i].age);
        printf("salary= ");
        scanf("%d", &person[i].salary);
    }
    printf("\n\n\n");

    for(int i=0; i<5; i++)
    {
        printf("information of person%d \n",i+1);
        printf("Age= %d\n", person[i].age);
        printf("salary= %d\n", person[i].salary);
    }
}
