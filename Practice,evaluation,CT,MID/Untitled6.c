#include<stdio.h>
struct info
{
    int roll;
    int mark;
};
int main()
{
    struct info *b,*c;
    int q=10,r=20;
    b=&q;
    c=&q;
    printf("%d",b->x);
}
