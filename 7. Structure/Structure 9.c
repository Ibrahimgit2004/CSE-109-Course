#include<stdio.h>
struct std
{
        int age;
        int marks;
};

int main()
{
    struct std std[3];
    int i;

    for(i=0; i<3; i++)
    {
        printf("std[%d] :\n",i+1);
        printf("age : ", i+1);
        scanf("%d",&std[i].age);
        printf("marks : ", i+1);
        scanf("%d",&std[i].marks);
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        printf("std[%d] :\n",i+1);
        printf("age[%d] : ", i+1);

        printf("marks[%d] : ", i+1);

    }
}
