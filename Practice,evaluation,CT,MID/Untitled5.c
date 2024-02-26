#include<stdio.h>


struct std_file
{
    char name[50];
    int roll;
    float marks;
};
void input()
{
struct std_file
{
    char name[50];
    int roll;
    float marks;
};

struct std_file a;
    printf("name= ");
    fflush(stdin);
    gets(a.name);
    fflush(stdin);
    printf("roll= ");
    scanf("%d",&a.roll);
    printf("marks= ");
    scanf("%f",&a.marks);

}
void output()
{
struct std_file
{
    char name[50];
    int roll;
    float marks;
};
struct std_file a;

    printf("name= ");
    puts(a.name);
    printf("roll= ");
    printf("%d\n",a.roll);
    printf("marks= ");
    printf("%f\n",a.marks);

}

int main()
{
    struct std_file std1,std2,std3;
input(std1);
output(std1);
printf("\n\n\n");
input(std2);
output(std2);
printf("\n\n\n");
input(std3);
output(std3);



}
