#include<stdio.h>
int main()

// basic
/*{
    int i ;
    printf("your number= ");
    scanf("%d", &i);


    for (i=i; i<10; ++i)
    {
        printf("%d",i);
    }


}
*/


{
    int num,a,b=0;
    printf("1st number is= ");
    scanf("%d", &a);
    printf("last number is= ");
    scanf("%d", &num);

    for(a=a; a<=num; ++a )
    {
        b=b+a;

    }
    printf("sum is = %d", b);


}
