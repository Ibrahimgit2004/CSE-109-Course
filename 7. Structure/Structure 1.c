#include<stdio.h>


struct person
{

     int age;
     float salary;

};


int main()
{
    struct person person1,person2;

    person1.age= 27;
    person1.salary= 2800.26;
    printf("person 1: \n");

    printf("age = %d\n",person1.age);
    printf("salary = %.2f\n",person1.salary);
}
