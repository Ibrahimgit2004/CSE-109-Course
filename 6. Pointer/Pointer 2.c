#include<stdio.h>
int main()
{
    int x=10,y=20,z=30;
    int *p;

    p=&x;
    printf("x= %d\n\n", *p);

    p=&y;
    printf("y= %d\n\n", *p);

    p=&z;
    printf("z= %d\n\n", *p);


}
