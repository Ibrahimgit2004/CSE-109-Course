#include<stdio.h>
int main()
{
   int a[5]={10,20,45,89,78},i;

   int *p1;

   p1=&a[0];
   for(i=1; i<5; i++)
   {
       printf("%d ", *p1);
       p1++;
   }



}
