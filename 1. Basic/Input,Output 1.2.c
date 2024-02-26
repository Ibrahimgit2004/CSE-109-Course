#include<stdio.h>
int main()
{
  int a;
  char b;
  float c;
  double d;

  printf("type int num= ");
  scanf("%d", &a);

  printf("type char= ");
  scanf(" %c", &b);

  printf("type float num= ");
  scanf("%f", &c);

  printf("type double num= ");
  scanf("%lf", &d);

  printf("your int number is= %d\n", a);
  printf("your char number is= %c\n", b);
  printf("your float number is= %f\n", c);
  printf("your double number is= %lf\n", d);

  getch();
}
