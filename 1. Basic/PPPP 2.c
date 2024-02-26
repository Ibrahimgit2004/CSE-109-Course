#include<stdio.h>
int main()
{
    int num;
    printf("input number=");
    scanf("%d", &num);

    if(num%5==0 && num%3==0)
    {
        printf("Divisible by both 3 and 5");
    }
      if(num%5==0 && num%3!=0)
    {
        printf("Divisible by 5 but not with 3");
    }
     if(num%5!=0 && num%3!=0)
    {
        printf("%d Is not divisible by both 3 and 5", num);
    }
}
