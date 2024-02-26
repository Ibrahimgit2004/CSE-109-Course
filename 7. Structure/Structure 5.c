#include<stdio.h>

struct person
{
    int age;
    int salary;
};

int main()
{
    struct person person1,person2;

    printf("enter info person1\n");
    printf("age= ");
    scanf("%d",&person1.age);
    printf("salary= ");
    scanf("%d",&person1.salary);
    printf("\n");

    printf("person1 :\n");
    printf("age= %d\n",person1.age);
    printf("salary= %d",person1.salary);

    printf("\n\n");

    printf("enter info person2 \n");
    printf("age= ");
    scanf("%d",&person2.age);
    printf("salary= ");
    scanf("%d",&person2.salary);
    printf("\n");

    printf("person2 :\n");
    printf("age= %d\n",person2.age);
    printf("salary= %d\n\n\n",person2.salary);

    if(person1.age==person2.age && person1.salary==person2.salary)
    {
        printf("person1 is equal to person 2");
    }
    else
    {
        printf("person1 is not equal to person 2");
    }
    getch();
}
